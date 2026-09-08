import requests


url = input("Enter URL to shorten: ")

api_url = "https://tinyurl.com/api-create.php"

params = {
    "url": url
}

try:
    response = requests.get(
        api_url,
        params=params,
        timeout=10
    )

    if response.status_code == 200:
        short_url = response.text

        print("\nOriginal URL:")
        print(url)

        print("\nShort URL:")
        print(short_url)

    else:
        print("Unable to shorten URL.")

except requests.RequestException as error:
    print("Request error:", error)