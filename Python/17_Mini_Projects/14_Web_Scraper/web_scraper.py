import requests
from bs4 import BeautifulSoup


url = input("Enter website URL: ")

try:
    response = requests.get(
        url,
        headers={
            "User-Agent": "Mozilla/5.0"
        },
        timeout=10
    )

    if response.status_code == 200:
        soup = BeautifulSoup(
            response.text,
            "html.parser"
        )

        print("\n===== PAGE TITLE =====")

        if soup.title:
            print(soup.title.get_text(strip=True))
        else:
            print("No title found.")

        print("\n===== HEADINGS =====")

        headings = soup.find_all(
            ["h1", "h2", "h3"]
        )

        for heading in headings:
            print(heading.get_text(strip=True))

    else:
        print(
            "Failed to access website.",
            response.status_code
        )

except requests.RequestException as error:
    print("Request error:", error)