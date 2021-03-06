/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertInfoCertificateHeaderCell : UITableViewCell {
    UIImage * _certificateImage;
    UIImage * _notTrustedGradient;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    CertInfoGradientLabel * _trustedLabel;
}

// Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo

- (void).cxx_destruct;
- (id)_certificateImage;
- (id)_notTrustedGradient;
- (id)_subtitleLabel;
- (id)_titleLabel;
- (id)_trustedLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (double)rowHeight;
- (void)setExpired:(bool)arg1;
- (void)setTrustSubtitle:(id)arg1;
- (void)setTrustTitle:(id)arg1;

// Image: /System/Library/AccessibilityBundles/CertInfo.axbundle/CertInfo

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;

@end
