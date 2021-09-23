#include <sourcemod>
#include <discordEmbedAPI>
#pragma newdecls required
#pragma semicolon 1


public Plugin myinfo =
{
	name = "DiscordEmbedAPI",
	author = "Sarrus",
	description = "",
	version = "1.0",
	url = "https://github.com/Sarrus1/DiscordEmbedAPI"
};


public void OnPluginStart()
{
}

public void SendDiscordWebhook()
{
	Webhook webhook = new Webhook();
	webhook.SetContent("This is the content of the webhook.");
	webhook.SetUsername("Sarrus");
	webhook.SetAvatarURL("https://avatars.githubusercontent.com/u/63302440?v=4");
	webhook.SetTTS(false);

	Embed embed1 = new Embed();
	embed1.SetTitle("Test embed n°1");
	embed1.SetDescription("This is the description of the embed n°1.");
	embed1.SetURL("https://github.com/Sarrus1/DiscordEmbedAPI");
	embed1.SetTimeStamp("1999-11-05T23:15:10.000Z");
	embed1.SetColor(12000);

	EmbedFooter footer1 = new EmbedFooter();
	footer1.SetText("Test embed footer n°1");
	footer1.SetIconURL("https://img.icons8.com/cotton/64/000000/server.png");					// Optional
	footer1.SetProxyIconURL("https://img.icons8.com/cotton/64/000000/server.png");		// Optional

	embed1.SetFooter(footer1);

	EmbedImage image1 = new EmbedImage();
	image1.SetURL("https://avatars.githubusercontent.com/u/63302440?v=4");
	image1.SetProxyURL("https://avatars.githubusercontent.com/u/63302440?v=4");		// Optional
	image1.SetHeight(400); 	// Optional
	image1.SetWidth(400);		// Optional

	embed1.SetImage(image1);

	EmbedThumbnail thumbnail1 = new EmbedThumbnail();
	thumbnail1.SetURL("https://avatars.githubusercontent.com/u/63302440?s=40&v=4");
	thumbnail1.SetProxyURL("https://avatars.githubusercontent.com/u/63302440?s=40&v=4");		// Optional
	thumbnail1.SetHeight(35); 	// Optional
	thumbnail1.SetWidth(35);		// Optional

	embed1.SetThumbnail(thumbnail1);

	EmbedProvider provider1 = new EmbedProvider();
	provider1.SetName("Provider of embed n°1");				// Optional
	provider1.SetURL("https://github.com/Sarrus1");		// Optional

	embed1.SetProvider(provider1);

	EmbedAuthor author1 = new EmbedAuthor();
	author1.SetName("Sarrus");
	author1.SetURL("https://tensor.fr");		// Optional
	author1.SetIconURL("https://avatars.githubusercontent.com/u/63302440?s=40&v=4");				// Optional
	author1.SetProxyIconURL("https://avatars.githubusercontent.com/u/63302440?s=40&v=4");		// Optional

	embed1.SetAuthor(author1);

	EmbedField field11 = new EmbedField();
	field11.SetName("Field n°1");
	field11.SetValue("The content of the field");
	field11.SetInline(true);

	embed1.AddField(field11);

	EmbedField field12 = new EmbedField();
	field12.SetName("Field n°2");
	field12.SetValue("The content of the field");
	field12.SetInline(true);

	embed1.AddField(field12);

	webhook.AddEmbed(embed1);

	Embed embed2 = new Embed();
	embed2.SetTitle("Test embed n°1");
	embed2.SetDescription("This is the description of the embed n°1.");
	embed2.SetURL("https://github.com/Sarrus1/DiscordEmbedAPI");
	embed2.SetTimeStamp("1999-11-05T23:15:10.000Z");
	embed2.SetColor(12000);

	EmbedFooter footer2 = new EmbedFooter();
	footer2.SetText("Test embed footer n°1");
	footer2.SetIconURL("https://img.icons8.com/cotton/64/000000/server.png");
	footer2.SetProxyIconURL("https://img.icons8.com/cotton/64/000000/server.png");

	embed2.SetFooter(footer2);

	EmbedImage image2 = new EmbedImage();
	image2.SetURL("https://avatars.githubusercontent.com/u/63302440?v=4");
	image2.SetProxyURL("https://avatars.githubusercontent.com/u/63302440?v=4");
	image2.SetHeight(400);
	image2.SetWidth(400);

	embed2.SetImage(image2);

	EmbedThumbnail thumbnail2 = new EmbedThumbnail();
	thumbnail2.SetURL("https://avatars.githubusercontent.com/u/63302440?s=40&v=4");
	thumbnail2.SetProxyURL("https://avatars.githubusercontent.com/u/63302440?s=40&v=4");
	thumbnail2.SetHeight(35);
	thumbnail2.SetWidth(35);

	embed2.SetThumbnail(thumbnail2);

	EmbedProvider provider2 = new EmbedProvider();
	provider2.SetName("Provider of embed n°1");
	provider2.SetURL("https://github.com/Sarrus1");

	embed2.SetProvider(provider2);

	EmbedAuthor author2 = new EmbedAuthor();
	author2.SetName("Sarrus");
	author2.SetURL("https://tensor.fr");
	author2.SetIconURL("https://avatars.githubusercontent.com/u/63302440?s=40&v=4");
	author2.SetProxyIconURL("https://avatars.githubusercontent.com/u/63302440?s=40&v=4");

	embed2.SetAuthor(author2);

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
}