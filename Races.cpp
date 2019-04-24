void human(int *Strength, int *Dexterity, int *Constitution, int *Intelligence, int *Wisdom, int *Charisma){
    *Strength++;
    *Dexterity++;
    *Constitution++;
    *Intelligence++;
    *Wisdom++;
    *Charisma++;
}
void drow(int *Dexterity, int *Charisma){
    *Dexterity += 2;
    *Charisma++;
}
void high(int *Dexterity, int *Intelligence){
    *Dexterity += 2;
    *Intelligence++;
}
void wood(int *Dexterity, int *Wisdom){
    *Dexterity += 2;
    *Wisdom++;
}
void hill(int *Constitution, int *Wisdom){
    *Constitution += 2;
    *Wisdom++;
}
void mountian(int *Strength, int *Constitution){
    *Strength += 2;
    *Constitution++;
}
void lightfoot(int *Dexterity, int *Wisdom){
    *Dexterity += 2;
    *Wisdom++;
}
void stout(int *Dexterity, int *Constitution){
    *Dexterity += 2;
    *Constitution++;
}
void gnome(int *Constitution, int *Intelligence){
    *Constitution++;
    *Intelligence += 2;
}
void halforc(int *Strength, int *Constitution){
    *Strength += 2;
    *Constitution++;
}
void dragonborn(int *Strength, int *Charisma){
    *Strength += 2;
    *Charisma++;
}
void tiefling(int *Intelligence, int *Charisma){
    *Intelligence++;
    *Charisma += 2;
}
