/*!
 @header IDeviceManagerMedia.h
 @abstract 音频处理协议
 @author
 @version 1.00 2014/01/01 Creation (1.00)
 */
#import <Foundation/Foundation.h>
#import "IDeviceManagerBase.h"

@class CTCallCenter;
@class EMAudioPlayer;
@class EMAudioRecorder;

/*!
 @protocol
 @brief 音频处理协议
 @discussion
 */
@protocol IDeviceManagerMedia <IDeviceManagerBase>

@required

#pragma mark - audio channel
/*!
 @method
 @brief 切换音频播放模式
 @param mode 音频播放模式
 @discussion
 @result 是否切换成功
 */
- (BOOL)chooseAudioPlaybackMode:(EMAudioPlaybackMode)mode;

/*!
 @method
 @brief 在耳机和扩音器之间切换音频播放模式
 @param outputDevice 音频播放模式
 @discussion
 @result 是否切换成功
 */
- (BOOL)switchAudioOutputDevice:(EMAudioOutputDevice)outputDevice;

/*!
 @property
 @brief 当前是否正在播放音频
 */
@property (nonatomic, readonly) BOOL isPlaying;

/*!
 @method
 @brief 收到新消息时, 播放声音
 @discussion
 */
- (void)playNewMessageSound;

/*!
 @method
 @brief 收到新消息时, 异步播放音频
 @discussion
 @result
 */
- (void)asyncPlayNewMessageSound;

/*!
 @method
 @brief 收到新消息时, 异步播放音频
 @param completion 播放完成时的回调block
 @param aQueue 回调block时的线程
 @discussion
 @result
 */
- (void)asyncPlayNewMessageWithCompletion:(void (^)(SystemSoundID soundId))completion
                                  onQueue:(dispatch_queue_t)aQueue;

/*!
 @method
 @brief 新消息到来时, 震动设备
 @discussion
 @result
 */
- (void)playVibration;

/*!
 @method
 @brief 新消息到来时, 震动设备(异步方法)
 @discussion
 @result
 */
- (void)asyncPlayVibration;

/*!
 @method
 @brief 新消息到来时, 震动设备(异步方法)
 @param completion 震动完成后的回调block
 @param aQueue 回调block时的线程
 @discussion
 @result
 */
- (void)asyncPlayVibrationWithCompletion:(void (^)(SystemSoundID soundId))completion
                                 onQueue:(dispatch_queue_t)aQueue;

/*!
 @method
 @brief 检查是否正在播放此语音文件
 @param aFilePath 语音文件的绝对路径
 @result 是否正在播放此语音文件
 */
- (BOOL)isPlayingAudioPath:(NSString *)aFilePath;

/*!
 @method
 @brief 播放音频(异步线程)
 @discussion 文件应为amr编码
 @param aFilePath 需要播放的音频的完整路径
 @result
 */
- (void)asynPlayingAudioWithPath:(NSString *)aFilePath;

/*!
 @method
 @brief 播放音频(异步线程)
 @param aFilePath 需要播放的音频的完整路径.
 @param completion 震动完成后的回调block
 @param aQueue 回调block时的线程
 @result
 */
- (void)asynPlayingAudioWithPath:(NSString *)aFilePath
            completion:(void (^)(NSError *aError))completion
               onQueue:(dispatch_queue_t)aQueue;

/*!
 @method
 @brief 停止当前正在播放的音频
 @discussion
 @result 是否成功停止播放
 */
- (BOOL)stopAudioPlaying;

/*!
 @method
 @brief 开始录制音频
 @param aFilePath 录制完成后的音频文件保存路径
 @discussion
 @result
 */
- (NSError *)startRecordingWithPreparePath:(NSString *)aFilePath;

/*!
 @method
 @brief 停止录制音频(异步方法),停止后会发送 didRecordAudio 广播,同时会附带录制后保存的文件路径和录制的音频时长
 @discussion
 @result
 */
- (void)asynStopRecording;

/*!
 @method
 @brief 停止录制音频(异步方法),停止后会调用completion block
 @param completion 录制音频完成后的回调block
 @param aQueue 回调block时的线程
 @discussion
 @result
 */
- (void)asynStopRecordingWithCompletion:(void (^)(NSString *aFilePath,
                                                        NSInteger duration,
                                                        NSError *error))completion
                                      onQueue:(dispatch_queue_t)aQueue;

/*!
 @method
 @brief 取消录制音频(异步线程), 完成后, 会发送didCancelRecordAudio广播
 @discussion
 @result
 */
- (void)asynCancelRecording;

/*!
 @method
 @brief 取消录制音频(异步线程)
 @param completion 录制音频完成后的回调block
 @param aQueue 回调block时的线程
 @discussion
 @result
 */
- (void)asynCancelRecordingWithCompletion:(void (^)(NSString *filePath, NSError *error))completion
                                        onQueue:(dispatch_queue_t)aQueue;

/*!
 @method
 @brief 获取最后一次录音的时长
 @discussion
 @result 音频时长
 */
- (double)peekRecorderVoiceMeter;

/*!
 @method
 @brief 判断麦克风是否可用
 @return 麦克风是否可用
 */
- (BOOL)checkMicrophoneAvailability;

@end
