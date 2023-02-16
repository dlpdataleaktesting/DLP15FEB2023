Skip to content
Search or jump to…
Pull requests
Issues
Codespaces
Marketplace
Explore
 
@dlpdataleaktesting 
geekcomputers
/
Python
Public
Fork your own copy of geekcomputers/Python
Code
Issues
200
Pull requests
85
Actions
Projects
Wiki
Security
Insights
Python/Webbrowser/tk-browser.py /
@mrprogrammer2938
mrprogrammer2938 Create tk-browser.py
Latest commit fdf74ff on Mar 11, 2022
 History
 1 contributor
28 lines (23 sloc)  647 Bytes

#!/usr/bin/python3
# Webbrowser v1.0
# Written by Sina Meysami
#

from tkinter import * # pip install tk-tools
import tkinterweb # pip install tkinterweb
import sys

class Browser(Tk):
    def __init__(self):
        super(Browser,self).__init__()
        self.title("Tk Browser")
        try:
            browser = tkinterweb.HtmlFrame(self)
            browser.load_website("https://google.com")
            browser.pack(fill="both",expand=True)
        except Exception:
            sys.exit()
            
            
def main():
    browser = Browser()
    browser.mainloop()
    
if __name__ == "__main__":
    # Webbrowser v1.0
    main()
Footer
© 2023 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
Python/tk-browser.py at master · geekcomputers/Python
