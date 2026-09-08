import smtplib
from email.message import EmailMessage

sender_email = "your_email@gmail.com"
receiver_email = "receiver_email@gmail.com"
password = "your_app_password"

message = EmailMessage()

message["Subject"] = "Python Automation Email"
message["From"] = sender_email
message["To"] = receiver_email

message.set_content(
    "Hello,\n\n"
    "This email was sent automatically using Python.\n\n"
    "Regards,\n"
    "Python Automation"
)

try:
    with smtplib.SMTP_SSL("smtp.gmail.com", 465) as server:
        server.login(sender_email, password)
        server.send_message(message)

    print("Email sent successfully.")

except Exception as error:
    print("Failed to send email.")
    print("Error:", error)