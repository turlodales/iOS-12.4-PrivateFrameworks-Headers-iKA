/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFColorPalette : NSObject <NAEquatable, NSCopying, NSMutableCopying> {
    NSArray * _colors;
    unsigned long long  _paletteType;
}

@property (nonatomic, copy) NSArray *colors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long paletteType;
@property (readonly) Class superclass;

+ (id)_defaultColorsOfType:(unsigned long long)arg1;
+ (id)_defaultRGBColors;
+ (id)_defaultTemperatureColors;
+ (id)defaultColorPalette;
+ (id)defaultColorPaletteOfType:(unsigned long long)arg1;
+ (id)warmWhiteColor;

- (void).cxx_destruct;
- (id)colorPaletteByAdjustingForColorProfile:(id)arg1;
- (id)colors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithColors:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithSerializedRepresentation:(id)arg1 type:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (unsigned long long)paletteType;
- (id)serializedRepresentation;
- (void)setColors:(id)arg1;

@end
