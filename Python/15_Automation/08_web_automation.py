from selenium import webdriver
from selenium.webdriver.common.by import By
import time

driver = webdriver.Chrome()

driver.get("https://www.google.com")

print("Page title:", driver.title)

search_box = driver.find_element(By.NAME, "q")

search_box.send_keys("Python programming")

search_box.submit()

time.sleep(3)

print("Search completed.")

driver.quit()