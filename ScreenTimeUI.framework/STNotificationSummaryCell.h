/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STNotificationSummaryCell : STTableCell {
    UILabel * _averageNotificationsLabel;
    STUsageGraphView * _graphView;
    UIImageView * _notificationDot;
    UILabel * _notificationsLabel;
}

@property (nonatomic, retain) UILabel *averageNotificationsLabel;
@property (nonatomic, retain) STUsageGraphView *graphView;
@property (nonatomic, retain) UIImageView *notificationDot;
@property (nonatomic, retain) UILabel *notificationsLabel;

// Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI

- (void).cxx_destruct;
- (id)averageNotificationsLabel;
- (id)graphView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)notificationDot;
- (id)notificationsLabel;
- (void)setAverageNotificationsLabel:(id)arg1;
- (void)setGraphView:(id)arg1;
- (void)setNotificationDot:(id)arg1;
- (void)setNotificationsLabel:(id)arg1;

// Image: /System/Library/AccessibilityBundles/ScreenTimeUI.axbundle/ScreenTimeUI

+ (Class)safeCategoryBaseClass;

- (bool)_accessibilityAlwaysReturnsChild;
- (id)_accessibilityGetSummaryElement;
- (void)_accessibilitySetSummaryElement:(id)arg1;
- (id)accessibilityElements;
- (void)setValue:(id)arg1;

@end
