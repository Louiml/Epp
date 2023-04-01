#include "emoji_stream.h"

EmojiStream& EmojiStream::operator>>(Emoji e) {
    switch (e) {
        case Emoji::E_Smile:
            std::cout << "\U0001F600";
            break;
        case Emoji::E_Sad:
            std::cout << "\U0001F61E";
            break;
        case Emoji::E_Heart:
            std::cout << "\U0001F496";
            break;
        case Emoji::E_HeartBroken:
            std::cout << "\U0001F494";
            break;
        case Emoji::E_HeartEyes:
            std::cout << "\U0001F60D";
            break;
        case Emoji::E_HeartEyesCat:
            std::cout << "\U0001F63B";
            break;
        case Emoji::E_GrinningFaceWithBigEyes:
            std::cout << "\U0001F603";
            break;
        case Emoji::E_FaceWithTearsOfJoy:
            std::cout << "\U0001F602";
            break;
        case Emoji::E_ThinkingFace:
            std::cout << "\U0001F914";
            break;
        case Emoji::E_SmilingFaceWithSmilingEyes:
            std::cout << "\U0001F60A";
            break;
        case Emoji::E_SmilingFaceWithHalo:
            std::cout << "\U0001F607";
            break;
        case Emoji::E_Crying_Face:
            std::cout << "\U0001F622";
            break;
        case Emoji::E_Pouting_Face:
            std::cout << "\U0001F621";
            break;
        case Emoji::E_ThumbsUp:
            std::cout << "\U0001F44D";
            break;
        case Emoji::E_ThumbsDown:
            std::cout << "\U0001F44E";
            break;
        case Emoji::E_StarOfDavid:
            std::cout << "\U00002721";
            break;
        case Emoji::E_Cross:
            std::cout << "\U00002717";
            break;
        case Emoji::E_Swastika:
            std::cout << "卐";
            break;
    }
    return *this;
}
