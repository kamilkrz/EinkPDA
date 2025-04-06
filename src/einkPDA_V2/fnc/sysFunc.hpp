#ifndef SYSFUNC_HPP
#define SYSFUNC_HPP

#include <Arduino.h>
#include <FS.h>
#include <vector>

// External variables (if needed)
extern String editingFile;
extern String allText;
extern std::vector<String> allLines;
extern bool disableTimeout;
extern unsigned long timeoutMillis;
extern unsigned long prevTimeMillis;
extern int TXT_APP_STYLE;
extern int battState;
extern int prevBattState;
extern bool newState;
extern bool TCA8418_event;
extern bool PWR_BTN_event;
extern int CurrentAppState;
extern int CurrentHOMEState;
extern String SLEEPMODE;
extern int FULL_REFRESH_AFTER;
extern int einkRefresh;
extern bool forceSlowFullUpdate;
extern int MAX_FILES;
extern String filesList[];
extern int fileIndex;
extern std::vector<String> excludedFiles;

// Function declarations
void saveFile();
void loadFile();
void delFile(String fileName);
void renFile(String oldFile, String newFile);
void copyFile(String oldFile, String newFile);
void appendToFile(String path, String inText);
String vectorToString();
void stringToVector(String inputText);
String removeChar(String str, char character);
void checkTimeout();
void setCpuSpeed(int newFreq);
void updateBattState();
void TCA8418_irq();
void PWR_BTN_irq();
char updateKeypress();
void printDebug();
void listDir(fs::FS &fs, const char *dirname);
void readFile(fs::FS &fs, const char *path);
String readFileToString(fs::FS &fs, const char *path);
void writeFile(fs::FS &fs, const char *path, const char *message);
void appendFile(fs::FS &fs, const char *path, const char *message);
void renameFile(fs::FS &fs, const char *path1, const char *path2);
void deleteFile(fs::FS &fs, const char *path);

#endif // SYSFUNC_HPP
