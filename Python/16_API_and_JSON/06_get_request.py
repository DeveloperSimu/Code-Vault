import requests

url = "https://jsonplaceholder.typicode.com/posts/1"

try:
    response = requests.get(url)

    print("Status Code:", response.status_code)

    if response.status_code == 200:
        data = response.json()

        print("\nResponse Data:")
        print(data)

    else:
        print("Request failed.")

except requests.RequestException as error:
    print("Error:", error)