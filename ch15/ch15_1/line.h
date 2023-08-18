#ifndef LINE_H
#define LINE_H

// clears the current line
void clear_line(void);

// add word to the end of the line
// add space in front if required
void add_word(const char* word);

// returns number of characters left in the current line
int space_remaining(void);

// writes the curent line with justification
void write_line(void);

// writes the current line without justification
void flush_line(void);

#endif