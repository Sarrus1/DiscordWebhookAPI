#include <ripext>

methodmap Embed < JSONObject
{
	public Embed() 
	{
		JSONObject jsonObject = new JSONObject();
		// Required for webhook embeds
		jsonObject.SetString("type", "rich");
		return view_as<Embed>(jsonObject);
	}

	/**
	 * Retrieve the title of the embed.
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
	 * Retrieve the description of the embed.
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
	 * Retrieve the URL of the embed.
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
	 * Retrieve the timestamp of the embed.
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
	 * Example: 1977-04-22T06:00:00Z
	 * 
	 * @param timestamp   	Timestamp of the embed.
	 * @return        			True on success. False otherwise.
	 */
	public bool SetTimeStamp(const char[] timestamp)
	{
		return this.SetString("timestamp", timestamp);
	}

	/**
	 * Retrieve the timestamp of the embed.
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


methodmap EmbedFooter < JSONObject
{
	public EmbedFooter() 
	{
		JSONObject jsonObject = new JSONObject();
		return view_as<EmbedFooter>(jsonObject);
	}

	/**
	 * Retrieve the text of the footer.
	 * 
	 * @param buffer        String buffer to store value.
	 * @param maxlength     Maximum length of the string buffer.
	 * @return              True on success. False otherwise.
	 */
	public bool GetText(char[] buffer, int maxlength)
	{
		return this.GetString("text", buffer, maxlength);
	}

	/**
	 * Set the text of the footer.
	 * 
	 * @param text   				Text of the footer.
	 * @return        			True on success. False otherwise.
	 */
	public bool SetText(const char[] text)
	{
		return this.SetString("text", text);
	}

	/**
	 * Retrieve the url of the footer icon.
	 * 
	 * @param buffer        String buffer to store value.
	 * @param maxlength     Maximum length of the string buffer.
	 * @return              True on success. False otherwise.
	 */
	public bool GetIconURL(char[] buffer, int maxlength)
	{
		return this.GetString("icon_url", buffer, maxlength);
	}

	/**
	 * Set the url of the footer icon.
	 * Note : this only supports http(s).
	 * 
	 * @param icon_url   		IconURL of the embed.
	 * @return        			True on success. False otherwise.
	 */
	public bool SetIconURL(const char[] icon_url)
	{
		return this.SetString("icon_url", icon_url);
	}

	/**
	 * Retrieve the proxy_icon_url of the footer.
	 * 
	 * @param buffer        String buffer to store value.
	 * @param maxlength     Maximum length of the string buffer.
	 * @return              True on success. False otherwise.
	 */
	public bool GetProxyIconURL(char[] buffer, int maxlength)
	{
		return this.GetString("proxy_icon_url", buffer, maxlength);
	}

	/**
	 * Set a proxied url of the footer icon.
	 * 
	 * @param proxy_icon_url   		IconURL of the embed.
	 * @return        						True on success. False otherwise.
	 */
	public bool SetProxyIconURL(const char[] proxy_icon_url)
	{
		return this.SetString("proxy_icon_url", proxy_icon_url);
	}
}


methodmap EmbedImage < JSONObject
{
	public EmbedImage() 
	{
		JSONObject jsonObject = new JSONObject();
		return view_as<EmbedImage>(jsonObject);
	}

	/**
	 * Retrieve the source url of the image.
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
	 * Set the source url of the image.
	 * Note : this only supports http(s).
	 * 
	 * @param url   		URL of the image.
	 * @return        	True on success. False otherwise.
	 */
	public bool SetURL(const char[] url)
	{
		return this.SetString("url", url);
	}

	/**
	 * Retrieve the proxied URL of the image.
	 * 
	 * @param buffer        String buffer to store value.
	 * @param maxlength     Maximum length of the string buffer.
	 * @return              True on success. False otherwise.
	 */
	public bool GetProxyURL(char[] buffer, int maxlength)
	{
		return this.GetString("proxy_url", buffer, maxlength);
	}

	/**
	 * Set a proxied URL of the image.
	 * 
	 * @param proxy_url   		Proxy URL of the image.
	 * @return        				True on success. False otherwise.
	 */
	public bool SetProxyURL(const char[] proxy_url)
	{
		return this.SetString("proxy_url", proxy_url);
	}

	/**
	 * Retrieve the height of the image.
	 * 
	 * @return    Int value of the image.
	 */
	public int GetHeight()
	{
		return this.GetInt("height");
	}

	/**
	 * Set the height of the image.
	 * 
	 * @param height   	Height of the image.
	 * @return        	True on success. False otherwise.
	 */
	public bool SetHeight(int height)
	{
		return this.SetInt("height", height);
	}

	/**
	 * Retrieve the width of the image.
	 * 
	 * @return    Int value of the image.
	 */
	public int GetWidth()
	{
		return this.GetInt("width");
	}

	/**
	 * Set the width of the image.
	 * 
	 * @param width   	Width of the image.
	 * @return        	True on success. False otherwise.
	 */
	public bool SetWidth(int width)
	{
		return this.SetInt("width", width);
	}
}


methodmap EmbedThumbnail < JSONObject
{
	public EmbedThumbnail() 
	{
		JSONObject jsonObject = new JSONObject();
		return view_as<EmbedThumbnail>(jsonObject);
	}

	/**
	 * Retrieve the source url of the thumbnail.
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
	 * Set the source url of the thumbnail.
	 * Note : this only supports http(s).
	 * 
	 * @param url   		URL of the thumbnail.
	 * @return        	True on success. False otherwise.
	 */
	public bool SetURL(const char[] url)
	{
		return this.SetString("url", url);
	}

	/**
	 * Retrieve the proxied URL of the thumbnail.
	 * 
	 * @param buffer        String buffer to store value.
	 * @param maxlength     Maximum length of the string buffer.
	 * @return              True on success. False otherwise.
	 */
	public bool GetProxyURL(char[] buffer, int maxlength)
	{
		return this.GetString("proxy_url", buffer, maxlength);
	}

	/**
	 * Set a proxied URL of the thumbnail.
	 * 
	 * @param proxy_url   		Proxy URL of the thumbnail.
	 * @return        				True on success. False otherwise.
	 */
	public bool SetProxyURL(const char[] proxy_url)
	{
		return this.SetString("proxy_url", proxy_url);
	}

	/**
	 * Retrieve the height of the thumbnail.
	 * 
	 * @return    Int value of the thumbnail.
	 */
	public int GetHeight()
	{
		return this.GetInt("height");
	}

	/**
	 * Set the height of the thumbnail.
	 * 
	 * @param height   	Height of the thumbnail.
	 * @return        	True on success. False otherwise.
	 */
	public bool SetHeight(int height)
	{
		return this.SetInt("height", height);
	}

	/**
	 * Retrieve the width of the thumbnail.
	 * 
	 * @return    Int value of the thumbnail.
	 */
	public int GetWidth()
	{
		return this.GetInt("width");
	}

	/**
	 * Set the width of the thumbnail.
	 * 
	 * @param width   	Width of the thumbnail.
	 * @return        	True on success. False otherwise.
	 */
	public bool SetWidth(int width)
	{
		return this.SetInt("width", width);
	}
}