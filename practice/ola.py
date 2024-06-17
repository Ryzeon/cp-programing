import pyautogui
import pyperclip

 
message = 'https://www.youtube.com/watch?v=QFbhsW3UPBw'

amount = 100

def enter():
    pyautogui.press("enter")


def control_v():
    pyautogui.hotkey('command', 'v') 

while amount >  0:
    amount = amount - 1
    control_v()
    enter()
