#pragma once

#include <iostream>

enum class Emoji {
    E_Smile,
    E_Sad,
    E_Heart,
    E_HeartBroken,
    E_HeartEyes,
    E_HeartEyesCat,
    E_GrinningFaceWithBigEyes,
    E_FaceWithTearsOfJoy,
    E_ThinkingFace,
    E_SmilingFaceWithSmilingEyes,
    E_SmilingFaceWithHalo,
    E_Crying_Face,
    E_Pouting_Face,
    E_ThumbsUp,
    E_ThumbsDown,
    E_StarOfDavid,
    E_Cross,
    E_Swastika
};

class EmojiStream {
public:
    EmojiStream& operator>>(Emoji e);
};
