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
	DiscordEmbed embed = new DiscordEmbed();
	embed.setColor(12000);
}