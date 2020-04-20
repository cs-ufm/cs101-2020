import os


def notify(text):
    os.system(f"""
              osascript -e 'display notification "{text}"'
              """)


notify("Hola mundo")

