#include <discordWebhookAPI>
#include <sourcemod>
#pragma newdecls required
#pragma semicolon 1

public Plugin myinfo =
{
  name        = "discordWebhookAPI",
  author      = "Sarrus, .Rushaway",
  description = "",
  version     = "1.1.0",
  url         = "https://github.com/Sarrus1/discordWebhookAPI"
};

ConVar g_cvWebhook;
ConVar g_cvThreadID;
ConVar g_cvThreadName;

public void OnPluginStart()
{
  g_cvWebhook = CreateConVar("sm_webhook_example", "", "The webhook URL of your Discord channel.", FCVAR_PROTECTED);
  // SET THIS TO PROTECTED SO PEOPLE CAN'T SEE YOUR WEBHOOK URL!!

  g_cvThreadID = CreateConVar("sm_webhook_thread_id", "", "The thread_id of your Discord forums. (Will reply to an existing thread)", FCVAR_PROTECTED);
  // SET THIS TO PROTECTED SO PEOPLE CAN'T SEE YOUR THREAD_ID !!

  g_cvThreadName = CreateConVar("sm_webhook_thread_name", "", "The Thread Name of your Discord forums. (If not empty, will create a new thread)");
  //  THIS CVAR WILL ALWAYS SURPASS thread_id IF NOT EMPTY !!

  RegConsoleCmd("sm_send_webhook", SendDiscordWebhook, "Send a test webhook message.");

  AutoExecConfig(true, "plugin.example");
}

Action SendDiscordWebhook(int client, int args)
{
  Webhook webhook = new Webhook("This is the content of the webhook.");
  webhook.SetUsername("Sarrus");
  webhook.SetAvatarURL("https://avatars.githubusercontent.com/u/63302440?v=4");

  Embed embed1 = new Embed("Test embed n°1", "This is the description of the embed n°1.");
  embed1.SetURL("https://github.com/Sarrus1/discordWebhookAPI");
  embed1.SetTimeStampNow();
  embed1.SetColor(12000);

  EmbedFooter footer1 = new EmbedFooter("Test embed footer n°1");
  footer1.SetIconURL("https://img.icons8.com/cotton/64/000000/server.png");  // Optional

  embed1.SetFooter(footer1);
  delete footer1;

  EmbedImage image1 = new EmbedImage("https://avatars.githubusercontent.com/u/63302440?v=4");

  embed1.SetImage(image1);
  delete image1;

  EmbedThumbnail thumbnail1 = new EmbedThumbnail();
  thumbnail1.SetURL("https://avatars.githubusercontent.com/u/63302440?s=40&v=4");

  embed1.SetThumbnail(thumbnail1);
  delete thumbnail1;

  EmbedAuthor author1 = new EmbedAuthor("Sarrus");
  author1.SetURL("https://tensor.fr");                                              // Optional
  author1.SetIconURL("https://avatars.githubusercontent.com/u/63302440?s=40&v=4");  // Optional

  embed1.SetAuthor(author1);
  delete author1;

  EmbedField field11 = new EmbedField("Field n°1", "The content of the field", true);

  embed1.AddField(field11);

  EmbedField field12 = new EmbedField();
  field12.SetName("Field n°2");
  field12.SetValue("The content of the field");
  field12.SetInline(true);

  embed1.AddField(field12);

  webhook.AddEmbed(embed1);

  Embed embed2 = new Embed();
  embed2.SetTitle("Test embed n°2");
  embed2.SetDescription("This is the description of the embed n°2.");
  embed2.SetTimeStamp("1999-11-06T23:15:10.000Z");
  embed2.SetColor(12000);

  EmbedFooter footer2 = new EmbedFooter();
  footer2.SetText("Test embed footer n°2");
  footer2.SetIconURL("https://img.icons8.com/cotton/64/000000/server.png");

  embed2.SetFooter(footer2);
  delete footer2;

  EmbedImage image2 = new EmbedImage();
  image2.SetURL("https://avatars.githubusercontent.com/u/63302440?v=4");

  embed2.SetImage(image2);
  delete image2;

  EmbedField field21 = new EmbedField();
  field21.SetName("Field n°1");
  field21.SetValue("The content of the field");
  field21.SetInline(true);

  embed2.AddField(field21);

  EmbedField field22 = new EmbedField();
  field22.SetName("Field n°2");
  field22.SetValue("The content of the field");
  field22.SetInline(true);

  embed2.AddField(field22);

  webhook.AddEmbed(embed2);

  char szWebhookURL[1000];
  g_cvWebhook.GetString(szWebhookURL, sizeof szWebhookURL);

  // Small example for add checks before continue
  if (!szWebhookURL[0])
  {
    LogError("The webhook URL of your Discord channel was not found or specified.");
    delete webhook;
    return Plugin_Handled;
  }

  char sThreadID[100];
  g_cvThreadID.GetString(sThreadID, sizeof sThreadID);

  char sThreadName[1000]; 
  g_cvThreadName.GetString(sThreadName, sizeof sThreadName);

  if (strlen(sThreadName) > 0)
  {
    webhook.SetThreadName(sThreadName);
    // discord API doc: If thread_name is provided, a thread with that name will be created in the forum channel
    // error: #220002	Webhooks posted to forum channels cannot have both a thread_name and thread_id
    // So no need to continue for thread_id method
    sThreadID[0] = '\0';
  }

  DataPack pack = new DataPack();
  pack.WriteCell(client);
  pack.WriteCell(args);
  pack.Reset();

  // Backwards compat: This version still work PERFECTLY. (It just doesn't support thread reply function)
  // webhook.Execute(szWebhookURL, OnWebHookExecuted, pack);
  webhook.Execute(szWebhookURL, OnWebHookExecuted, pack, sThreadID); // sThreadID is optinal 
  delete webhook;

  return Plugin_Continue;
}

public void OnWebHookExecuted(HTTPResponse response, DataPack pack)
{
  int client = pack.ReadCell();

  PrintToServer("Processed client n°%s's webhook, status %d", client, response.Status);
  if (response.Status != HTTPStatus_OK)
  {
    PrintToServer("An error has occured while sending the webhook.");
    return;
  }
  PrintToServer("The webhook has been sent successfuly.");

  // Retrieve the message's id.
  JSONObject resData = view_as<JSONObject>(response.Data);
  char messageId[64];
  resData.GetString("id", messageId, sizeof messageId);
  PrintToServer(messageId);
  editWebhook(messageId, client);
}

void editWebhook(const char[] messageId, int client)
{
  Webhook webhook = new Webhook("This is the edited content of the webhook.");
  webhook.SetUsername("Sarrus");
  webhook.SetAvatarURL("https://avatars.githubusercontent.com/u/63302440?v=4");

  Embed embed1 = new Embed("Test edited embed n°1", "This is the edited description of the embed n°1.");

  webhook.AddEmbed(embed1);

  char szWebhookURL[1000];
  g_cvWebhook.GetString(szWebhookURL, sizeof szWebhookURL);

  if (!szWebhookURL[0])
  {
    LogError("The webhook URL of your Discord channel was not found or specified.");
    delete webhook;
    return;
  }

  DataPack pack = new DataPack();
  pack.WriteCell(client);
  pack.Reset();

  webhook.Edit(szWebhookURL, messageId, OnWebHookEdited, pack);
  delete webhook;
}

void OnWebHookEdited(HTTPResponse response, DataPack pack)
{
  int client = pack.ReadCell();

  PrintToServer("Edited client n°%s's webhook, status %d", client, response.Status);
  if (response.Status != HTTPStatus_OK)
  {
    PrintToServer("An error has occured while editing the webhook.");
    return;
  }
  PrintToServer("The webhook has been edited successfuly.");
}