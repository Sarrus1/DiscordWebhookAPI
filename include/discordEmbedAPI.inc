#include <ripext>

methodmap DiscordEmbed < JSONObject
{
	public DiscordEmbed() 
	{
		JSONObject jsonObject = new JSONObject();
		return view_as<DiscordEmbed>(jsonObject);
	}
	
	/**
	 * Retrieves the title of the embed.
	 * 
	 * @param szBuffer        String buffer to store value.
	 * @param iBufferSize     Maximum length of the string buffer.
	 * @return                True on success. False otherwise.
	 */
	public bool getTitle(char[] buffer, int maxlength)
	{
		return this.GetString("title", buffer, maxlength);
	}

	public bool setTitle(const char[] title)
	{
		return this.SetString("title", title);
	}

	public int getColor()
	{
		return this.GetInt("color");
	}

	public bool setColor(int color)
	{
		return this.SetInt("color", color);
	}
}