#include <ripext>

int iColor;

methodmap DiscordEmbed < JSONObject
{
	public DiscordEmbed() 
	{
		JSONObject jsonObject = new JSONObject();
		// Required for webhook embeds
		jsonObject.SetString("type", "rich");
		return view_as<DiscordEmbed>(jsonObject);
	}

	/**
	 * Retrieves the title of the embed.
	 * 
	 * @param szBuffer        String buffer to store value.
	 * @param iBufferSize     Maximum length of the string buffer.
	 * @return                True on success. False otherwise.
	 */
	public bool GetTitle(char[] buffer, int maxlength)
	{
		return this.GetString("title", buffer, maxlength);
	}

	/**
	 * Set the title of the embed.
	 * 
	 * @param title     Title of the embed.
	 * @return          True on success. False otherwise.
	 */
	public bool SetTitle(const char[] title)
	{
		return this.SetString("title", title);
	}

	/**
	 * Retrieves the description of the embed.
	 * 
	 * @param buffer        String buffer to store value.
	 * @param maxlength     Maximum length of the string buffer.
	 * @return              True on success. False otherwise.
	 */
	public bool GetDescription(char[] buffer, int maxlength)
	{
		return this.GetString("description", buffer, maxlength);
	}

	/**
	 * Set the description of the embed.
	 * 
	 * @param description   Description of the embed.
	 * @return          		True on success. False otherwise.
	 */
	public bool SetDescription(const char[] description)
	{
		return this.SetString("description", description);
	}

	/**
	 * Retrieves the URL of the embed.
	 * 
	 * @param buffer        String buffer to store value.
	 * @param maxlength     Maximum length of the string buffer.
	 * @return              True on success. False otherwise.
	 */
	public bool GetURL(char[] buffer, int maxlength)
	{
		return this.GetString("url", buffer, maxlength);
	}

	/**
	 * Set the URL of the embed.
	 * 
	 * @param url   	URL of the embed.
	 * @return        True on success. False otherwise.
	 */
	public bool SetURL(const char[] url)
	{
		return this.SetString("url", url);
	}

	/**
	 * Retrieves the timestamp of the embed.
	 * 
	 * @param buffer        String buffer to store value.
	 * @param maxlength     Maximum length of the string buffer.
	 * @return              True on success. False otherwise.
	 */
	public bool GetTimeStamp(char[] buffer, int maxlength)
	{
		return this.GetString("timestamp", buffer, maxlength);
	}

	/**
	 * Set the timestamp of the embed.
	 * Note that the webhook will error out if the timestamp is not ISO 8601 complient.
	 * 
	 * @param timestamp   	Timestamp of the embed.
	 * @return        			True on success. False otherwise.
	 */
	public bool SetTimeStamp(const char[] timestamp)
	{
		return this.SetString("timestamp", timestamp);
	}

	/**
	 * Retrieves the timestamp of the embed.
	 * 
	 * @return    Int value of the color.
	 */
	public int GetColor()
	{
		return this.GetInt("color");
	}

	/**
	 * Set the color of the embed.
	 * 
	 * @param color   	Color code of the embed.
	 * @return        	True on success. False otherwise.
	 */
	public bool SetColor(int color)
	{
		return this.SetInt("color", color);
	}
}