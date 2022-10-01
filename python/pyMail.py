import smtplib

#Complete sending() body to send a mail to "code.amimes@gmail.com" with the passed subject and body args.
def sending():

   # msg = f"subject: {subject}\n\n{body}"
   # server.sendmail('type senders id here', '''type receivers emial id here''', msg)

subject = "HacktoberFest2022"  
body = "Issue #2 added"
sending(subject, body)
