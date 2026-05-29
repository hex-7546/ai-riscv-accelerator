// firmware/text_data.h
#ifndef TEXT_DATA_H
#define TEXT_DATA_H

#define INPUT_SIZE      64
#define HIDDEN_NEURONS  4
#define OUTPUT_CLASSES  2

// LAYER 1: Hidden Layer Weights (4 neurons x 64 inputs)
const char layer1_weights[HIDDEN_NEURONS][INPUT_SIZE] = {
    {  3, -12,   5,  24,  -2,  18,   0,   4,  -9,  11,   2,  -5,   1,   8,  -3,   6,
      14, -22,   9,  31,  -4,  12,   7,  -1,   0,   5,  -8,  14, 23,  -2,   9,  11,
      -6,  19,  12,  -3,   8,  22,  -1,   4,   5,   0,  11,  14,  -9,  18,   3,   2,
      15,  -7,   4,  11, -13,   6,   8,   0,  -2,  14,  25,  -6,   4,  11,  -1,   8 },
    { -1,   8, -32,   4,  11,  -9,   0,   2,   4,  -5,  12,  19,  -4,   3,   8, -14,
       2,   5,  -9,  11,   4,   0,  14, -22,   8,   9,  -1,   4,  12,  15,  -6,   3,
       2,   1,  -4,   8,  14,  19, -23,   4,  11,   0,   5,   8,  -2,   1,   9,  14,
      22,  -4,   3,   8,  11,  -1,   0,   5,   4,  -9,  12,  18,  -3,   2,   7,   1 },
    { 14,  -5,   0,  19, -22,   7,   4,   1,   8,  -9,  12,  15,  -3,   2,   6, -11,
       4,   8, -14,  22,   9,   0,   5,  -4,  11,  18,  -2,   3,   1,   9, -12,   4,
       5,   8,  -1,   0,  14,  22, -31,   4,  11,   8,   9,  -2,   1,   4,  12,  15,
      -6,   3,   2,   1,  -4,   8,  14,  19, -23,   4,  11,   0,   5,   8,  -2,   1 },
    { -8,  21,  13,  -3,   6, -15,   4,   8,   9, -11,  14,  22,  -3,   0,   5,  -4,
      11,  18,  -2,   3,   1,   9, -12,   4,   5,   8,  -1,   0,  14,  22, -31,   4,
      11,   8,   9,  -2,   1,   4,  12,  15, -6,   3,   2,   1, -4,   8,  14,  19,
     -23,  4,  11,   0,   5,   8,  -2,   1,   4,  12,  15,  -6,   3,   2,   1,  -4 }
};
const int layer1_biases[HIDDEN_NEURONS] = { -15, 24, -8, 41 };

// LAYER 2: Output Classification Weights (2 output classes x 4 hidden inputs)
const char layer2_weights[OUTPUT_CLASSES][HIDDEN_NEURONS] = {
    {  32, -18,  45, -12 },  // Positive sentiment class weights
    { -25,  51, -14,  28 }   // Negative sentiment class weights
};
const int layer2_biases[OUTPUT_CLASSES] = { 10, -5 };

#endif
