# Circle Calculator

After entering the radius of the circle, this program will give the user the diameter, circumference, area & surfaceArea of the circle and of the sphere of that radius.

## New things

using fgets and getchar, I think it takes 2 spaces of the set character limit, so If I am entering 2 characters, then I need to allocate 4 spaces for the string. might be because once character is subtracted while using the function

```c
unit[strlen(unit) - 1] = '\0';
```

so yeah, a thing to know!

yep, that's what I thought, but what happens under the hood is

when I type '**Cm**' and then press '**Enter**', what goes into the memory is *'C' 'm' '\n' '\0'*. The above mentioned code remmoves the new line, and there's the string terminator, so if I don't declare a string terminator, then I need to declare only 2 characters in the size.