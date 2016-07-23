# QBRoulette
Quarterback Roulette simulation

// I saw a bunch of Quarterback Roulette simulators on TV so I decided to make my own in C++.

// Rules: You can choose whether or not you want to spin the wheel. If you spin, you must take the quarterback you get.
// If your current quarterback has already been taken, you must spin the wheel.
// The order of Quarterback Roulette will be determined by the standings after the 2015 season (i.e. Titans first, Broncos last,
// Patriots get to pick, no trades). 

// Assume all Quarterbacks are healthy

// Look for notes below the code

// Let's see what happens!

// Ideas for more roulettes: Each team's best QB in franchise history, etc.


// Notes:

// A "0" in the array means you can't take this QB

// int pick = (rand() % 32) + 1; The random number generator

// Team order with current Quarterback

// 1. Tennessee Titans - Marcus Mariota
// 2. Cleveland Browns - Robert Griffin III
// 3. San Diego Chargers - Philip Rivers
// 4. Dallas Cowboys - Tony Romo
// 5. Jacksonville Jaguars - Blake Bortles
// 6. Baltimore Ravens - Joe Flacco
// 7. San Francisco 49ers - Colin Kaepernick
// 8. Miami Dolphins - Ryan Tannehill
// 9. Tampa Bay Buccaneers - Jameis Winston
// 10. New York Giants - Eli Manning
// 11. Chicago Bears - Jay Cutler
// 12. New Orleans Saints - Drew Brees
// 13. Philadelphia Eagles - Sam Bradford
// 14. Oakland Raiders - Derek Carr
// 15. Los Angeles Rams - Jared Goff
// 16. Detroit Lions - Matthew Stafford
// 17. Atlanta Falcons - Matt Ryan
// 18. Indianapolis Colts - Andrew Luck
// 19. Buffalo Bills - Tyrod Taylor
// 20. New York Jets - Ryan Fitzpatrick
// 21. Washington Redskins - Kirk Cousins
// 22. Houston Texans - Brock Osweiler
// 23. Minnesota Vikings - Teddy Bridgewater
// 24. Cincinnati Bengals - Andy Dalton
// 25. Pittsburgh Steelers - Ben Roethlisberger
// 26. Seattle Seahawks - Russell Wilson
// 27. Green Bay Packers - Aaron Rodgers
// 28. Kansas City Chiefs - Alex Smith
// 29. New England Patriots - Tom Brady
// 30. Arizona Cardinals - Carson Palmer
// 31. Carolina Panthers - Cam Newton
// 32. Denver Broncos - Mark Sanchez
