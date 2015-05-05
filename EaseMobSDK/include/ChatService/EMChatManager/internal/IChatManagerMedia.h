/*!
 @header IChatManagerMedia.h
 @abstract 为ChatManager提供基础的媒体操作
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import "IChatManagerBase.h"

@class EMChatVoice;
@class EMError;

/*!
 @protocol
 @brief 本协议主要处理：录音、播放录音、停止录音、震动等操作
 @discussion 所有不带Block回调的异步方法, 需要监听回调时, 需要先将要接受回调的对象注册到delegate中, 示例代码如下:
 [[[EaseMob sharedInstance] chatManager] addDelegate:self delegateQueue:dispatch_get_main_queue()]
 */
@protocol IChatManagerMedia <IChatManagerBase>

@required

/*!
 @property
 @brief 是否正在播放音频
 */
@property (nonatomic, readonly) BOOL isPlayingAudio;

#pragma mark - play new message sound

/*!
 @method
 @brief 收到新消息时, 播放声音提示
 @discussion
 @result
 */
- (void)playNewMessageSound;

/*!
 @method
 @brief 异步方法, 收到新消息时, 播放声音提示
 @discussion 播放完成后, EMChatManagerDelegateMedia中的didPlaySystemSound:回调会被触发
 @result
 */
- (void)asyncPlayNewMessageSound;

/*!
 @method
 @brief 异步方法, 收到新消息时, 播放声音提示
 @discussion
 @param completion 回调
 @param aQueue     回调时的线程
 @result
 */
- (void)asyncPlayNewMessageWithCompletion:(void (^)(SystemSoundID soundId))completion
                                 onQueue:(dispatch_queue_t)aQueue;

#pragma mark - play vibration

/*!
 @method
 @brief 收到新消息时, 播放震动提示
 @discussion
 @result
 */
- (void)playVibration;

/*!
 @method
 @brief 异步方法, 收到新消息时, 播放震动提示
 @discussion 播放完成后, EMChatManagerDelegateMedia中的didPlaySystemSound:回调会被触发
 @result
 */
- (void)asyncPlayVibration;

/*!
 @method
 @brief 异步方法, 收到新消息时, 播放震动提示
 @discussion
 @param completion 回调
 @param aQueue     回调时的线程
 @result
 */
- (void)asyncPlayVibrationWithCompletion:(void (^)(SystemSoundID soundId))completion
                                onQueue:(dispatch_queue_t)aQueue;

#pragma mark - is playing audio

/*!
 @method
 @brief 判断是否正在播放该聊天声音
 @discussion
 @param aChatVoice 聊天记录声音对象
 @result 是否正在播放该声音对象
 */
- (BOOL)isPlayingAudioChat:(EMChatVoice *)aChatVoice;

/*!
 @method
 @brief 判断是否正在播放音频
 @discussion
 @result 是否正在播放声音对象
 */
- (BOOL)isPlayingAudio;

#pragma mark - play audio

/*!
 @method
 @brief 异步方法, 播放一个聊天记录的声音对象
 @discussion 播放完成后, EMChatManagerDelegateMedia中的didPlayAudio:error:回调会被触发
 @param aChatVoice 需要播放的聊天音频对象
 @result
 */
- (void)asyncPlayAudio:(EMChatVoice *)aChatVoice;

/*!
 @method
 @brief 异步方法, 播放一个聊天记录的声音对象
 @discussion
 @param aChatVoice 需要播放的聊天音频对象
 @param completion 回调
 @param aQueue     回调时的线程
 @result
 */
- (void)asyncPlayAudio:(EMChatVoice *)aChatVoice
           completion:(void (^)(EMError *error))completion
              onQueue:(dispatch_queue_t)aQueue;

/*!
 @method
 @brief 停止当前正在播放的音频
 @discussion
 @result 是否成功停止了语音的播放
 */
- (BOOL)stopPlayingAudio;

#pragma mark - record

/*!
 @method
 @brief 开始录制音频
 @discussion
 @param pError 错误信息
 @result
 */
- (void)startRecordingAudioWithError:(NSError **)pError;

/*!
 @method
 @brief 异步方法, 停止录制音频
 @discussion 录制完成后, EMChatManagerDelegateMedia中的didRecordAudio:error:回调会被触发
 @result
 */
- (void)asyncStopRecordingAudio;

/*!
 @method
 @brief 异步方法, 停止录制音频
 @discussion
 @param completion 回调
 @param aQueue     回调时的线程
 @result
 */
- (void)asyncStopRecordingAudioWithCompletion:(void (^)(EMChatVoice *aChatVoice,
                                                       NSError *error))completion
                                     onQueue:(dispatch_queue_t)aQueue;

#pragma mark - cancel record

/*!
 @method
 @brief 异步方法, 取消录制音频
 @discussion 取消录制后, EMChatManagerDelegateMedia中的didCancelRecordAudio:error:回调会被触发
 @result
 */
- (void)asyncCancelRecordingAudio;

/*!
 @method
 @brief 异步方法, 取消录制音频
 @discussion
 @param completion 回调
 @param aQueue     回调时的线程
 @result
 */
- (void)asyncCancelRecordingAudioWithCompletion:(void (^)(EMChatVoice *aChatVoice,
                                                         EMError *error))completion
                                       onQueue:(dispatch_queue_t)aQueue;

#pragma mark - peek voice meter

/*!
 @method
 @brief 获取录制音频时的音量
 @discussion 停止录音后, 再去调用该方法, 会返回最后一次录制音频的音量
 @result 音量, 值域为0到1.0的浮点数
 */
- (double)peekRecorderVoiceMeter;

@end
