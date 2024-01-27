# arudoro
Arduino UNO sketch for hardware Pomodoro timer for ATMega328P Boards

## Why I made this?
I use an online tool called PomoFocus for my pomodoro timer but the issue is that I spend more time looking at the time and pausing it rather than doing my work so I decided to make my own appliance for it using Arduino UNO so that I can focus on my work instead of looking at the timer because the timer isn't visible now! I can work until the buzzer beeps.

## How it works
- When the board is connected to power, it gives a pomodoro starting buzz and the built in board LED blinks every second to indicate the focus timer.
- After 25 mins, there will be a long buzz after which, the light blinks once every 3 seconds indicating break time.
- Break time lasts for 5 mins, after which, the buzzer goes back to starting buzz

## List of Components
- Arduino Uno
- Piezo Buzzer
- Jumpers

## Circuit Diagram
<img width="533" alt="image" src="https://github.com/SpaciousCoder78/arudoro/assets/88923986/d7def9a3-89eb-4af3-8c46-2fb43ff27c4f">
