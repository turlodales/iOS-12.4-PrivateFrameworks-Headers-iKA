/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassLogoImageSet : PKPassImageSet {
    PKImage * _backgroundImage;
    PKImage * _bankLogoImage;
    PKImage * _cardBackgroundCombinedImage;
    PKImage * _cardBackgroundImage;
    PKImage * _cobrandLogoImage;
    PKImage * _footerImage;
    PKImage * _logoImage;
    PKImage * _networkLogoImage;
    PKImage * _stripImage;
    PKImage * _thumbnailImage;
}

@property (nonatomic, retain) PKImage *backgroundImage;
@property (nonatomic, retain) PKImage *bankLogoImage;
@property (nonatomic, retain) PKImage *cardBackgroundCombinedImage;
@property (nonatomic, retain) PKImage *cardBackgroundImage;
@property (nonatomic, retain) PKImage *cobrandLogoImage;
@property (nonatomic, retain) PKImage *footerImage;
@property (nonatomic, retain) PKImage *logoImage;
@property (nonatomic, retain) PKImage *networkLogoImage;
@property (nonatomic, retain) PKImage *stripImage;
@property (nonatomic, retain) PKImage *thumbnailImage;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)archiveName;
+ (unsigned int)currentVersion;
+ (long long)imageSetType;
+ (bool)shouldCache;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundImage;
- (id)bankLogoImage;
- (id)cardBackgroundCombinedImage;
- (id)cardBackgroundImage;
- (id)cobrandLogoImage;
- (void)encodeWithCoder:(id)arg1;
- (id)footerImage;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)logoImage;
- (id)networkLogoImage;
- (void)preheatImages;
- (void)setBackgroundImage:(id)arg1;
- (void)setBankLogoImage:(id)arg1;
- (void)setCardBackgroundCombinedImage:(id)arg1;
- (void)setCardBackgroundImage:(id)arg1;
- (void)setCobrandLogoImage:(id)arg1;
- (void)setFooterImage:(id)arg1;
- (void)setLogoImage:(id)arg1;
- (void)setNetworkLogoImage:(id)arg1;
- (void)setStripImage:(id)arg1;
- (void)setThumbnailImage:(id)arg1;
- (id)stripImage;
- (id)thumbnailImage;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (void)loadPDFArtFromBundle:(id)arg1;
- (void)loadPDFArtFromBundle:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
- (void)resizeWithScreenSize:(struct CGSize { double x1; double x2; })arg1;

@end
