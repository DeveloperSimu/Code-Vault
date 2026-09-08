import requests

url = "https://jsonplaceholder.typicode.com/posts"

data = {
    "title": "Python API",
    "body": "Learning POST request using Python.",
    "userId": 1
}

try:
    response = requests.post(url, json=data)

    print("Status Code:", response.status_code)

    if response.status_code == 201:
        print("\nPOST Request Successful.")
        print("Response:")
        print(response.json())

    else:
        print("POST request failed.")

except requests.RequestException as error:
    print("Error:", error)