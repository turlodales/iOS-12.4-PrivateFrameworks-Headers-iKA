/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUVideoMetadata : NSObject {
    double  _duration;
    NSError * _error;
    bool  _muted;
    double  _playbackPosition;
    double  _timePlayed;
    double  _volume;
}

@property (nonatomic) double duration;
@property (nonatomic, copy) NSError *error;
@property (nonatomic) bool muted;
@property (nonatomic) double playbackPosition;
@property (nonatomic) double timePlayed;
@property (nonatomic) double volume;

- (void).cxx_destruct;
- (double)duration;
- (id)error;
- (bool)muted;
- (double)playbackPosition;
- (void)setDuration:(double)arg1;
- (void)setError:(id)arg1;
- (void)setMuted:(bool)arg1;
- (void)setPlaybackPosition:(double)arg1;
- (void)setTimePlayed:(double)arg1;
- (void)setVolume:(double)arg1;
- (double)timePlayed;
- (double)volume;

@end
