import requests

url = "https://jsonplaceholder.typicode.com/users/1"

try:
    response = requests.get(url, timeout=10)

    if response.status_code == 200:
        data = response.json()

        print("API Response Received Successfully.\n")

        print("ID:", data.get("id"))
        print("Name:", data.get("name"))
        print("Username:", data.get("username"))
        print("Email:", data.get("email"))

        address = data.get("address", {})

        print("\nCity:", address.get("city"))

    elif response.status_code == 404:
        print("Resource not found.")

    else:
        print("API returned status code:", response.status_code)

except requests.Timeout:
    print("Request timed out.")

except requests.RequestException as error:
    print("Request error:", error)

except ValueError:
    print("Invalid JSON response.")