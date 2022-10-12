import smtplib

# Complete sending() body to send a mail to "code.amimes@gmail.com" with the passed subject and body args.

SENDER_EMAIL = "*******"
RECEIVER_EMAIL = "code.amimes@gmail.com"


def sending(subject, body):
    # msg =
    # server.sendmail('type senders id here', '''type receivers emial id here''', msg)

    port = 587  # For starttls
    smtp_server = "smtp.gmail.com"
    sender_email = SENDER_EMAIL  # Enter your address
    receiver_email = RECEIVER_EMAIL  # Enter receiver address
    password = input("Type your password and press enter: ")
    message = f"subject: {subject}\n\n{body}"

    # creates SMTP session
    s = smtplib.SMTP('smtp.gmail.com', 587)

    # start TLS for security
    s.starttls()

    # Authentication
    s.login(sender_email, password)

    # sending the mail
    s.sendmail(sender_email, receiver_email, message)

    # terminating the session
    s.quit()


if __name__ == '__main__':
    subject = "HacktoberFest2022"
    body = "Issue #2 added"
    sending(subject, body)
