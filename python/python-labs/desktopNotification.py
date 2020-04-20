import os
#! Only Works in MACOS


def notify(text):
    os.system(f"""
              osascript -e 'display notification "{text}"'
              """)


notify("Hola mundo")

