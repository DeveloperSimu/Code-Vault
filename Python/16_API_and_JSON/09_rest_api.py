import requests

base_url = "https://jsonplaceholder.typicode.com"

try:
    # GET
    response = requests.get(base_url + "/posts/1")

    if response.status_code == 200:
        print("GET Response:")
        print(response.json())

    # POST
    post_data = {
        "title": "REST API",
        "body": "Python REST API example.",
        "userId": 1
    }

    response = requests.post(
        base_url + "/posts",
        json=post_data
    )

    if response.status_code == 201:
        print("\nPOST Response:")
        print(response.json())

    # PUT
    update_data = {
        "id": 1,
        "title": "Updated Title",
        "body": "Updated content.",
        "userId": 1
    }

    response = requests.put(
        base_url + "/posts/1",
        json=update_data
    )

    if response.status_code == 200:
        print("\nPUT Response:")
        print(response.json())

    # DELETE
    response = requests.delete(
        base_url + "/posts/1"
    )

    if response.status_code == 200:
        print("\nDELETE Request Successful.")

except requests.RequestException as error:
    print("API Error:", error)