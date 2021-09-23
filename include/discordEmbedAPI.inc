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
	 * @param icon_url   		IconURL of the footer.
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
	 * @param proxy_icon_url   		IconURL of the footer.
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
	 * Retrieve the source url of the media.
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
	 * Set the source url of the media.
	 * Note : this only supports http(s).
	 * 
	 * @param url   		URL of the media.
	 * @return        	True on success. False otherwise.
	 */
	public bool SetURL(const char[] url)
	{
		return this.SetString("url", url);
	}

	/**
	 * Retrieve the proxied URL of the media.
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
	 * Set a proxied URL of the media.
	 * 
	 * @param proxy_url   		Proxy URL of the media.
	 * @return        				True on success. False otherwise.
	 */
	public bool SetProxyURL(const char[] proxy_url)
	{
		return this.SetString("proxy_url", proxy_url);
	}

	/**
	 * Retrieve the height of the media.
	 * 
	 * @return    Int value of the media.
	 */
	public int GetHeight()
	{
		return this.GetInt("height");
	}

	/**
	 * Set the height of the media.
	 * 
	 * @param height   	Height of the media.
	 * @return        	True on success. False otherwise.
	 */
	public bool SetHeight(int height)
	{
		return this.SetInt("height", height);
	}

	/**
	 * Retrieve the width of the media.
	 * 
	 * @return    Int value of the media.
	 */
	public int GetWidth()
	{
		return this.GetInt("width");
	}

	/**
	 * Set the width of the media.
	 * 
	 * @param width   	Width of the media.
	 * @return        	True on success. False otherwise.
	 */
	public bool SetWidth(int width)
	{
		return this.SetInt("width", width);
	}
}


methodmap EmbedThumbnail < EmbedImage
{
	public EmbedThumbnail() 
	{
		JSONObject jsonObject = new JSONObject();
		return view_as<EmbedThumbnail>(jsonObject);
	}
}


methodmap EmbedVideo < EmbedImage
{
	public EmbedVideo() 
	{
		JSONObject jsonObject = new JSONObject();
		return view_as<EmbedVideo>(jsonObject);
	}
}


methodmap EmbedProvider < JSONObject
{
	public EmbedProvider() 
	{
		JSONObject jsonObject = new JSONObject();
		return view_as<EmbedProvider>(jsonObject);
	}

	/**
	 * Retrieve the name of the provider.
	 * 
	 * @param buffer        String buffer to store value.
	 * @param maxlength     Maximum length of the string buffer.
	 * @return              True on success. False otherwise.
	 */
	public bool GetName(char[] buffer, int maxlength)
	{
		return this.GetString("name", buffer, maxlength);
	}

	/**
	 * Set the name of the provider.
	 * 
	 * @param name   		Name of the provider.
	 * @return        	True on success. False otherwise.
	 */
	public bool SetProxyURL(const char[] name)
	{
		return this.SetString("name", name);
	}

		/**
	 * Retrieve the source url of the provider.
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
	 * Set the source url of the provider.
	 * 
	 * @param url   		URL of the provider.
	 * @return        	True on success. False otherwise.
	 */
	public bool SetURL(const char[] url)
	{
		return this.SetString("url", url);
	}
}


methodmap EmbedAuthor < JSONObject
{
	public EmbedAuthor() 
	{
		JSONObject jsonObject = new JSONObject();
		return view_as<EmbedAuthor>(jsonObject);
	}

	/**
	 * Retrieve the name of the author.
	 * 
	 * @param buffer        String buffer to store value.
	 * @param maxlength     Maximum length of the string buffer.
	 * @return              True on success. False otherwise.
	 */
	public bool GetName(char[] buffer, int maxlength)
	{
		return this.GetString("name", buffer, maxlength);
	}

	/**
	 * Set the name of the author.
	 * 
	 * @param name   				Name of the author.
	 * @return        			True on success. False otherwise.
	 */
	public bool SetName(const char[] name)
	{
		return this.SetString("name", name);
	}

	/**
	 * Retrieve the url of the author.
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
	 * Set the url of the author.
	 * 
	 * @param url   	URL of the author.
	 * @return        True on success. False otherwise.
	 */
	public bool SetURL(const char[] url)
	{
		return this.SetString("url", url);
	}

	/**
	 * Retrieve the icon_url of the author.
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
	 * Set the icon_url of the author.
	 * Note : this only supports http(s).
	 * 
	 * @param icon_url   		IconURL of the author.
	 * @return        			True on success. False otherwise.
	 */
	public bool SetIconURL(const char[] icon_url)
	{
		return this.SetString("icon_url", icon_url);
	}

	/**
	 * Retrieve the proxy_icon_url of the author.
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
	 * Set a proxied url of the author.
	 * 
	 * @param proxy_icon_url   		IconURL of the author.
	 * @return        						True on success. False otherwise.
	 */
	public bool SetProxyIconURL(const char[] proxy_icon_url)
	{
		return this.SetString("proxy_icon_url", proxy_icon_url);
	}
}


methodmap EmbedField < JSONObject
{
	public EmbedField() 
	{
		JSONObject jsonObject = new JSONObject();
		return view_as<EmbedField>(jsonObject);
	}

	/**
	 * Retrieve the name of the field.
	 * 
	 * @param buffer        String buffer to store value.
	 * @param maxlength     Maximum length of the string buffer.
	 * @return              True on success. False otherwise.
	 */
	public bool GetName(char[] buffer, int maxlength)
	{
		return this.GetString("name", buffer, maxlength);
	}

	/**
	 * Set the name of the field.
	 * 
	 * @param name   				Name of the field.
	 * @return        			True on success. False otherwise.
	 */
	public bool SetName(const char[] name)
	{
		return this.SetString("name", name);
	}

	/**
	 * Retrieve the value of the field.
	 * 
	 * @param buffer        String buffer to store value.
	 * @param maxlength     Maximum length of the string buffer.
	 * @return              True on success. False otherwise.
	 */
	public bool GetValue(char[] buffer, int maxlength)
	{
		return this.GetString("value", buffer, maxlength);
	}

	/**
	 * Set the value of the field.
	 * 
	 * @param value   	Value of the field.
	 * @return        	True on success. False otherwise.
	 */
	public bool SetValue(const char[] value)
	{
		return this.SetString("value", value);
	}

	/**
	 * Retrieve the inline parameter of the field.
	 * 
	 * @return			The bool value of the inline parameter.
	 */
	public bool GetInline()
	{
		return this.GetBool("inline");
	}

	/**
	 * Set whether or not this field should display inline.
	 * 
	 * @param inline   			Bool value of the inline parameter.
	 * @return        			True on success. False otherwise.
	 */
	public bool SetInline(bool inline)
	{
		return this.SetBool("inline", inline);
	}
}