import urllib.request

url = "https://example.com"

try:
    response = urllib.request.urlopen(url)

    print("Status Code:", response.status)
    print("Response:", response.read().decode()[:500])

except Exception as error:
    print("Request failed.")
    print("Error:", error)