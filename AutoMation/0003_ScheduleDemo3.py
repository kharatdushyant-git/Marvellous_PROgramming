import schedule
import time
import datetime

def Display():
    print("Jay Ganesh....",datetime.datetime.now())

def main():
    print("Automation Script Started")

    schedule.every(1).minute.do(Display)

    while(True):
        schedule.run_pending()
        time.sleep(1)

    print("End of the Script")   

if __name__ == "__main__":
    main()   

'''
    output :-
    Automation Script Started
    Jay Ganesh.... 2026-07-18 18:29:40.243976
    Jay Ganesh.... 2026-07-18 18:30:40.244225
    Jay Ganesh.... 2026-07-18 18:31:40.244438
    Jay Ganesh.... 2026-07-18 18:32:40.244671
    Jay Ganesh.... 2026-07-18 18:33:40.244913
    Jay Ganesh.... 2026-07-18 18:34:40.245084
    Jay Ganesh.... 2026-07-18 18:35:40.246413

    -> not perfect / Accurate as : 

''' 