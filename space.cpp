#include <iostream>

int main () {

std::string username;
int choice1;
int choice2;
int choice3;

std::cout << "Welcome to....\n";
std::cout << "A Grand Space Adventure!\n\n";
std::cout << "What is your characters name?\n\n\n";
std::cin >> username;

std::cout << "Hello Admiral " << username << " and welcome to the destroyer class vessel 'Cerberus'.\n\n";

std::cout << "Our current path is set to take us back to our home base on the planet Eidolon 9.\n\n";

std::cout << "The road is said to be dangerous and plenty of obstacles will exist ahead. I hope you are ready to make decisions that will impact not only your survival, but the crews as well.\n\n\n\n";

std::cout << "As your ship follows the vector home, an alert pings. Commander Shale relays that it seems to be an abandoned ship. Based off the scans, there seems to be no life on board\n\n"; 

std::cout << "'What would you like to do Admiral " << username << "?' asks Commander Shale.\n\n 1) Board and Investigate the Ship    2) Continue Onwards\n\n";

std::cin >> choice1;

while (choice1 != 1  && choice1 != 2) {

  std::cout << "Invalid Input\n";
  std::cin >> choice1;

} 

if (choice1 == 1 ) {

  std::cout << "The 'Cerberus' moves towards the abandoned ship. As your hull lines-up with a giant hole in the other ships cargo bay, the connection latch seals the two ships together, you hear a faint alarm coming from the other ship.\n\n";

  std::cout << "As you and your crew moves on board the ship, the alarm intensifies. You guide the crew towards their helm. As you walk through the corridors of the ship and pass the crew mess, you notice bodies lying about untouched by the elements due to the cold of space.\n\n";

  std::cout << "You send Chief Medical Officer Tormund to inspect the bodies and determine the cause of death.\n\n";

  std::cout << "As you reach the helm, you see again more dead bodies.\n You press the flashing emergency button to turn off the alarms, as you do a recording begins to play.\n"; 

  std::cout << "A hologram flashes up and you see the face of the dead captain seated to your right. A gravely voice begins,\n\n"; 

  std::cout << "'To Those whom may find this ship, I truly hope you are wearing Hazmat gear, we have encountered a plague of some sort, the Meidcal Officer has attempted to create an antidote, but the process may not be finished before it is too late. The plague seems to be airborne, if you have had contact with the ship and breathed in any air, please find the antidote, or find help soon.'\n\n";

  std::cout << "Panic erupts. At the same time, Officer Tormund returns. 'The air, its toxic, we need to get off this ship immedialty lest we face dire consequences' he shouts.\n\n";

  std::cout << "You direct your team to leave promptly. On the way out, you notice in the medical bay a centrifuge machine that is blinking green. You walk to the centrifuge and grab the vial inside. This could be the antidote the Captain in the SOS message mentioned. You stow the vial in your pocket and make haste to the exit.\n\n";

  std::cout << "You have arrived back at your ship, all seems in order. You return towards your vector home. During this time, Officer Tormund begins checking the crews vitals to ensure no harm has been done.\n\n";

  std::cout << "A few hours pass, and your mind begins to feel hazy. You notice a couple cadets seem to be acting weird. They seem slugish and devoid of their normal demeanor. You order Officer Tormund to the bridge. Before he arrvies, the two cadets collpase out of their chairs. Their eyes bloodshot, and face redened.\n\n";

  std::cout << "Officer Tormund rushes to their bodies. He sits for a moment taking scans before rising. 'This is not good' he mutters. He approaches you and says 'If my scans are correct, these cadets wont be long for this world. The virus they have matches the exact samples I got from the ship, we need to take necessary precautions. Get these two on lockdown, I'm going to call the nearest Galatic Med Bay.' He turns to leave.\n\n"; 

  std::cout << "You remember the vial in your pocket, is it the antidote? Should you stop Officer Tormund and give it to him?\n\n";

  std::cout << "1) Hand the Vial to Tormund   2) Say Nothing\n";
  
  std::cin >> choice2; 

  while (choice2 != 1 && choice2 != 2) {

    std::cout << "Invalid Input\n";
    std::cin >> choice2;
  }

  if (choice2 == 1) {

    std::cout << "You call out, 'Officer Tormund' and he turns around quickly and reaproaches. You hand him the vial and say 'This was in their medical bay, I believe this may hold the key to fend of this virus. Please divert your focuses to this' He nods slightly, but you can see he thinks this might not be the best idea.\n\n";

    std::cout << "Hours pass with no word from Officer Tormund. In this time, three more crew members have fallen, As this rate, there may not be enough crew to fly the vessel. You pull up your com and radio Officer Tormund, but receive no response. You try twice more to no avail. Irritated you decide to go to the medical bay yourself.\n\n";

    std::cout << "As you arrive to the medical bay, you feel out of breath. Is this the virus? you think. Or are you just out of shape you continue to ponder. The walk is not short. As you open the door to the medical bay, you gaps.\n\n";

    std::cout << "Officer Tormund is lying on the floor choking on air. His face is red, and eyes bloodshot, just like all the fallen crew. You being to panic. You rush over to Officer Tormund. As you watch the life drain from his eyes you see the vial on the floor to his right. You grab it and take a close inspection. The label reads VICTIM 1'S BLOOD, TOXIC, DO NOT OPEN. Your heart drops\n\n";

    std::cout << "You being to panic, how much time did you have left, could you make it back to the bridge and set a course for the nearest Med Bay. Shaking you rise to your feet and begin walking to the bridge, vial still in hand.\n\n";
    
    std::cout << "As you continue down the long corridors you feel your heart rate rising, your chest begins to tighten, and if feels like you cant breathe. You collapse to the ground. As you fall, the vial shatters on the floor. You look the ceiling, your vision begins fade. As you drift into nothingness, you think, is this all my fault.\n\n\n";

    std::cout << "THANK YOU FOR PLAYING A GRAND SPACE ADVENTURE.\n";

  }

  if (choice2 == 2) {
    
    std::cout << "You set a course for Med Bay 13561. Estimated arrival time is 45 mins. As the minutes pass slowly, more and more crew members begin to fall. As you begin docking at the med bay, you begin to feel weak and cloudy. As your vision starts to fade, you see figures in white hazmat suits rushing on board to your aide. As you pass out in their arms you are thankful you decided not to tell Officer Tormund about the vial.\n\n";

    std::cout << "You awake, a Nursebot by your side displays its been 3 days and 16 hours since you arrived at the med bay. A doctor walks in. 'Y'all were in pretty bad shape when we showed up, you ought to be lucky. All the crew except for 3 cadets have been restored to health. Your ship has been scrubbed of all toxins and viruses. You may begin your home journey as promptly as you see fit.\n\n";

    std::cout << "'Well crew, that was a close call wouldnt you say, lets get back home now shall we?' You see the crew healthy and smiling as you take off from the med bay. As your ship sets course back to Eidolon 9, you wonder what was in the vial. As you pull it out of your pocket you notice the vial says VICTIM 1 BLOOD SAMPLE, TOXIC, DO NOT OPEN. You shudder and walk to the nearest space shoot. With a sigh you drop the vial into the sealed hole and press the eject button. You watch as the vial shoots into space and disappears from sight.\n\n"; 
  }


}

 if (choice1 == 2) {

  std::cout << "You move safely past the abandoned ship.\n\n\n";
}

if (choice1 == 2 || choice2 == 2) {

std::cout << "As your journey continues a few hours pass. Suddenly all displays light up and pings can be heard coming from the navigational unit. Commander Shale relays that you are rapidly approaching an asteroid field. You order for the ship to hault.\n\n";

std::cout << "What would you like to do?\n\n 1) Attempt to go through 2) Find a path around\n\n";

std::cin >> choice3;

while (choice3 != 1 && choice3 != 2) {

    std::cout << "Invalid Input\n";
    std::cin >> choice3;
  }

if (choice3 == 1) {

  std::cout << "You enter the astroid field taking it slow. As your ship dodged in and out of the asteroids you hear slight tings and rumblings as smaller unseeable pieces hit the ship. Suddnely as you arc over a large boulder you see nothing but rock in front of you. \n\n";

  std::cout << "'Prepare lasers to full power' you order your crew. Within seconds you hear back 'All systems hot' from First Officer Paxol. 'Fire!' you yell.\n\n";

  std::cout << "BOOOOOM......\n\n";

  std::cout << "The path in front is now clear. Your ship proceeds forwards.\n\n";

  std::cout << "As you continue forward, you see two large rocks closing in on each other right in the way of your path. You cannot go around this one wihtout halting for a few moments. 'Punch it!' you command. You feel the ship lurch forward hard as the engines ramp to full power. You speed in between the two rocks. The distance seems forever and slowly the rocks are getting close to crushing you to dust.\n\n";

  std::cout << "You look out the bridge and realize you dont have enough speed to make it out before the rocks collapse into each other. You close your eyes and wait for impact.\n\n\n";

  std::cout << "THANK YOU FOR PLAYING A GRAND SPACE ADVENTURE.\n";
}

if (choice3 == 2) {

  std::cout << "'Commander Shale, please plot a course that avoids these rocks without going into the belt if you would' you say. 'Yes Sir' he replies.\n\n";

  std::cout << "'Course Updated' Commander Shale relays. 'Estimated loss of time is 2 hours and 50 minutes' he also says. While this loss of time may be inconvenient, at least you know you will get home safely.\n\n";

  std::cout << "5 more hours pass and you see Eidolon 9 begin to appear from the void of space. You sigh in relief as you have been able to get everyone home safe and sound.\n\n\n";

   std::cout << "THANK YOU FOR PLAYING A GRAND SPACE ADVENTURE.\n";
    
}
}

}