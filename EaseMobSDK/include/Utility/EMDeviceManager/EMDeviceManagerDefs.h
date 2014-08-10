/*!
 @header EMDeviceManagerDefs
 @abstract 硬件管理的一些enum定义信息
 @author EaseMob Inc.
 @version 1.0
 */
#ifndef EaseMobClientSDK_DeviceManagerDefs_h
#define EaseMobClientSDK_DeviceManagerDefs_h

typedef enum {
    // output to earphone
    eAudioOutputDevice_earphone = 0,
    
    // output to speaker
    eAudioOutputDevice_speaker
}EMAudioOutputDevice;

typedef enum {
    // play sound, stop in background&screen lock, mixed with others
    eAudioPlayMode_Simple = 0,
    
    // play sound, stop in background&screen lock, play sound exclusively
    eAudioPlayMode_SimpleExclusive,
    
    // play sound, persist in backgound&screen lock
    eAudioPlayMode_PersistPlay,
    
    // record sound only
    eAudioPlayMode_RecordOnly,
    
    // play & record
    eAudioPlayMode_PlayAndRecord
}EMAudioPlaybackMode;

#endif
