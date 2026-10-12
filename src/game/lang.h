// English translation of the game's text. The Japanese strings are the keys, so the original
// code keeps drawing its Japanese text and DrawText() swaps in the translation when English is on.
#pragma once

// Returns the English text for `jp`, or nullptr if there is none.
const char *Lang_English(const char *jp);

// Returns the text to show in the current language (the input itself for Japanese).
const char *Tr(const char *jp);
