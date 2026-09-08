import requests


city = input("Enter city name: ")

api_key = "YOUR_API_KEY"

url = (
    "https://api.openweathermap.org/data/2.5/weather"
    f"?q={city}&appid={api_key}&units=metric"
)

try:
    response = requests.get(url, timeout=10)

    if response.status_code == 200:
        data = response.json()

        temperature = data["main"]["temp"]
        humidity = data["main"]["humidity"]
        description = data["weather"][0]["description"]

        print("\n===== WEATHER =====")
        print("City:", city)
        print("Temperature:", temperature, "°C")
        print("Humidity:", humidity, "%")
        print("Condition:", description)

    elif response.status_code == 404:
        print("City not found.")

    else:
        print("Unable to fetch weather data.")

except requests.RequestException as error:
    print("Request error:", error)