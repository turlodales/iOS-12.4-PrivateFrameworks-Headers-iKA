/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostInterval : SignpostObject {
    SignpostEvent * _beginEvent;
    SignpostEvent * _endEvent;
}

@property (nonatomic, readonly) NSString *_intervalTypeString;
@property (nonatomic, retain) SignpostEvent *beginEvent;
@property (nonatomic, retain) SignpostEvent *endEvent;
@property (nonatomic, readonly) bool isSyntheticInterval;

+ (id)serializationTypeNumber;

- (void).cxx_destruct;
- (void)_adjustBeginTimeVal:(struct timeval { long long x1; int x2; }*)arg1;
- (void)_adjustEndTimeVal:(struct timeval { long long x1; int x2; }*)arg1;
- (id)_descriptionStringForColumn:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2 asBegin:(bool)arg3;
- (id)_dictionaryRepresentationWithIsHumanReadable:(bool)arg1 shouldRedact:(bool)arg2;
- (id)_eventDescriptions;
- (bool)_hasBeginTimeval;
- (bool)_hasEndTimeval;
- (id)_intervalTypeString;
- (id)beginEvent;
- (bool)beginTimezone:(struct timezone { int x1; int x2; }*)arg1;
- (id)debugDescription;
- (id)descriptionWithTimeFormat:(unsigned long long)arg1 verbosity:(unsigned char)arg2;
- (unsigned long long)durationMachContinuousTime;
- (float)durationSeconds;
- (id)endEvent;
- (unsigned long long)endMachContinuousTime;
- (bool)endTimezone:(struct timezone { int x1; int x2; }*)arg1;
- (unsigned long long)hash;
- (id)humanReadableType;
- (id)initWithBeginEvent:(id)arg1 endEvent:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSyntheticInterval;
- (id)number1Name;
- (id)number1Value;
- (id)number2Name;
- (id)number2Value;
- (unsigned long long)scope;
- (void)setBeginEvent:(id)arg1;
- (void)setEndEvent:(id)arg1;
- (unsigned long long)startMachContinuousTime;
- (id)string1Name;
- (id)string1Value;
- (id)string2Name;
- (id)string2Value;
- (bool)telemetryEnabled;
- (long long)tv_sec;
- (int)tv_usec;
- (int)tz_dsttime;
- (int)tz_minuteswest;

@end
