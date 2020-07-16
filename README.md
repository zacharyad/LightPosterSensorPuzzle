# "Hidden Light Sensors in Posters" puzzle.

### This is a puzzle that uses hardware and software to create an engaging puzzle that acts as one puzzle inside a larger escape room.

The puzzles senses the rooms light and holds a threshold that has to be met to achieve an unlocked state. When a light sensor reads a dark enough reading (Hand coveres the ambianet light reaching the sensor) the code will wait for all sensors to meet "coverered state" in order to use relay to unlock 12v Mag-lock.

## The User experience:

- Users aquire a riddle that informs them that they must cover given areas of posters around the room.
- When all (1-3) sensors are covered. A door will open to the next challenge/puzzle.

## The Hardware:

- Light sensing module (Cleaner circuitry for a photo-resister, reading analog light values 0-1023).
- Arduino Nano.
- 5v Relay.
- 12v Magnetic Lock.

## The Software:

- Code written by myself using arduino IDE, C/C++.
- Libraries:
- N/A

<img src="./images/posterExample.JPG" style="transform: rotate(90deg); margin: 50px" alt="Image that shows a poster that would hide light sensor" width="250">
