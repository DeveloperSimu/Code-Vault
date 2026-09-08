import requests
import json

url = "https://jsonplaceholder.typicode.com/users/1"

try:
    response = requests.get(url, timeout=10)

    if response.status_code == 200:
        data = response.json()

        json_data = json.dumps(data, indent=4)

        print("API Response in JSON Format:\n")
        print(json_data)

        print("\nSelected Information:")
        print("Name:", data.get("name"))
        print("Email:", data.get("email"))
        print("Phone:", data.get("phone"))
        print("Website:", data.get("website"))

    else:
        print("API request failed.")
        print("Status Code:", response.status_code)

except requests.RequestException as error:
    print("Request Error:", error)

except ValueError:
    print("Invalid JSON response.")