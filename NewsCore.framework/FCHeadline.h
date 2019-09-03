/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCHeadline : NSObject <FCFeedElement, FCHeadlineProviding> {
    NSString * _accessoryText;
    NSArray * _allowedStorefrontIDs;
    NSString * _articleID;
    NSString * _articleRecirculationConfigJSON;
    <FCNativeAdProviding> * _associatedAd;
    long long  _backendArticleVersion;
    NSData * _backingArticleRecordData;
    NSArray * _blockedStorefrontIDs;
    bool  _boundToContext;
    bool  _bundlePaid;
    NSString * _callToActionText;
    bool  _canBePurchased;
    NSString * _clusterID;
    unsigned long long  _contentType;
    NSURL * _contentURL;
    FCCoverArt * _coverArt;
    bool  _deleted;
    bool  _displayAsNativeAd;
    NSDate * _displayDate;
    NSString * _excerpt;
    FCHeadlineExperimentalTitleMetadata * _experimentalTitleMetadata;
    bool  _featureCandidate;
    unsigned long long  _feedOrder;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * _globalCohorts;
    double  _globalUserFeedback;
    unsigned long long  _halfLife;
    bool  _hasThumbnail;
    NSURL * _headlineURL;
    bool  _hiddenFromAutoFavorites;
    bool  _hiddenFromFeeds;
    NSArray * _iAdCategories;
    NSArray * _iAdKeywords;
    NSArray * _iAdSectionIDs;
    NSString * _identifier;
    bool  _isDraft;
    bool  _isLocalDraft;
    bool  _issueOnly;
    NSString * _language;
    NSDate * _lastFetchedDate;
    NSDate * _lastModifiedDate;
    NSString * _localDraftPath;
    FCIssue * _masterIssue;
    long long  _minimumNewsVersion;
    NSArray * _moreFromPublisherArticleIDs;
    bool  _needsRapidUpdates;
    bool  _paid;
    double  _personalizedScore;
    bool  _pressRelease;
    NSString * _primaryAudience;
    NSDate * _publishDate;
    long long  _publisherArticleVersion;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * _publisherCohorts;
    NSArray * _publisherSpecifiedArticleIDs;
    NSString * _referencedArticleID;
    NSArray * _relatedArticleIDs;
    unsigned long long  _role;
    FCFeedPersonalizedItemScoreProfile * _scoreProfile;
    NSString * _shortExcerpt;
    bool  _showBundleSoftPaywall;
    bool  _showMinimalChrome;
    bool  _showSubscriptionRequiredText;
    <FCChannelProviding> * _sourceChannel;
    NSString * _sourceName;
    bool  _sponsored;
    NSString * _sponsoredBy;
    <FCHeadlineStocksFields> * _stocksFields;
    FCTopStoriesStyleConfiguration * _storyStyle;
    unsigned long long  _storyType;
    NSString * _surfacedByBinID;
    NSString * _surfacedByChannelID;
    NSString * _surfacedBySectionID;
    NSSet * _surfacedByTagIDs;
    NSString * _surfacedByTopicID;
    FCHeadlineThumbnail * _thumbnail;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _thumbnailFocalFrame;
    FCHeadlineThumbnail * _thumbnailHQ;
    FCHeadlineThumbnail * _thumbnailLQ;
    FCHeadlineThumbnail * _thumbnailMedium;
    FCHeadlineThumbnail * _thumbnailUltraHQ;
    FCHeadlineThumbnail * _thumbnailWidget;
    FCHeadlineThumbnail * _thumbnailWidgetHQ;
    FCHeadlineThumbnail * _thumbnailWidgetLQ;
    NSString * _title;
    NSString * _titleCompact;
    unsigned long long  _topStoryType;
    NSArray * _topicIDs;
    NSArray * _topics;
    bool  _usesImageOnTopLayout;
    NSString * _videoCallToActionTitle;
    NSURL * _videoCallToActionURL;
    double  _videoDuration;
    NSURL * _videoURL;
    bool  _webEmbedsEnabled;
}

@property (nonatomic, copy) NSString *accessoryText;
@property (nonatomic, readonly, copy) NSArray *allowedStorefrontIDs;
@property (getter=isANF, nonatomic, readonly) bool anf;
@property (nonatomic, copy) NSString *articleID;
@property (nonatomic, readonly) NSString *articleRecirculationConfigJSON;
@property (nonatomic, retain) <FCNativeAdProviding> *associatedAd;
@property (nonatomic, readonly) long long backendArticleVersion;
@property (nonatomic, readonly) NSData *backingArticleRecordData;
@property (nonatomic, readonly, copy) NSArray *blockedStorefrontIDs;
@property (getter=isBoundToContext, nonatomic, readonly) bool boundToContext;
@property (getter=isBundlePaid, nonatomic) bool bundlePaid;
@property (nonatomic, copy) NSString *callToActionText;
@property (nonatomic, readonly) bool canBePurchased;
@property (nonatomic, copy) NSString *clusterID;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic, readonly, copy) NSURL *contentURL;
@property (nonatomic, readonly) FCCoverArt *coverArt;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeleted, nonatomic) bool deleted;
@property (readonly, copy) NSString *description;
@property (getter=isDisplayingAsNativeAd, nonatomic) bool displayAsNativeAd;
@property (nonatomic, copy) NSDate *displayDate;
@property (nonatomic, copy) NSString *excerpt;
@property (nonatomic, readonly, copy) FCHeadlineExperimentalTitleMetadata *experimentalTitleMetadata;
@property (getter=isExplicitContent, nonatomic, readonly) bool explicitContent;
@property (getter=isFeatureCandidate, nonatomic, readonly) bool featureCandidate;
@property (nonatomic, readonly) long long feedElementType;
@property (nonatomic, readonly) unsigned long long feedHalfLifeMilliseconds;
@property (nonatomic, readonly, copy) NSString *feedID;
@property (nonatomic) unsigned long long feedOrder;
@property (getter=isFromBlockedStorefront, nonatomic, readonly) bool fromBlockedStorefront;
@property (nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property (nonatomic) double globalUserFeedback;
@property (nonatomic) unsigned long long halfLife;
@property (nonatomic, readonly) bool hasGlobalUserFeedback;
@property (nonatomic) bool hasThumbnail;
@property (nonatomic, readonly) bool hasVideo;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *headlineURL;
@property (getter=isHiddenFromAutoFavorites, nonatomic, readonly) bool hiddenFromAutoFavorites;
@property (getter=isHiddenFromFeeds, nonatomic, readonly) bool hiddenFromFeeds;
@property (nonatomic, readonly, copy) NSArray *iAdCategories;
@property (nonatomic, readonly, copy) NSArray *iAdKeywords;
@property (nonatomic, readonly, copy) NSArray *iAdSectionIDs;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) bool isBlockedExplicitContent;
@property (nonatomic, readonly) bool isDraft;
@property (nonatomic, readonly) bool isLocalDraft;
@property (nonatomic, readonly) bool isTopStory;
@property (getter=isIssueOnly, nonatomic, readonly) bool issueOnly;
@property (nonatomic, readonly, copy) NSString *itemID;
@property (nonatomic, readonly, copy) NSString *language;
@property (nonatomic, readonly, copy) NSDate *lastFetchedDate;
@property (nonatomic, readonly, copy) NSDate *lastModifiedDate;
@property (nonatomic, readonly, copy) NSArray *linkedArticleIDs;
@property (nonatomic, readonly, copy) NSArray *linkedIssueIDs;
@property (nonatomic, readonly, copy) NSString *localDraftPath;
@property (nonatomic, readonly, copy) FCIssue *masterIssue;
@property (nonatomic, readonly) long long minimumNewsVersion;
@property (nonatomic, readonly, copy) NSArray *moreFromPublisherArticleIDs;
@property (nonatomic, readonly) bool needsRapidUpdates;
@property (nonatomic, readonly) unsigned long long order;
@property (getter=isPaid, nonatomic) bool paid;
@property (getter=isPressRelease, nonatomic, readonly) bool pressRelease;
@property (nonatomic, readonly, copy) NSString *primaryAudience;
@property (nonatomic, copy) NSDate *publishDate;
@property (nonatomic, readonly) unsigned long long publishDateMilliseconds;
@property (nonatomic, readonly) long long publisherArticleVersion;
@property (nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property (nonatomic, readonly, copy) NSString *publisherID;
@property (nonatomic, readonly) NSArray *publisherSpecifiedArticleIDs;
@property (nonatomic, readonly, copy) NSString *referencedArticleID;
@property (nonatomic, readonly, copy) NSArray *relatedArticleIDs;
@property (nonatomic) unsigned long long role;
@property (nonatomic, retain) FCFeedPersonalizedItemScoreProfile *scoreProfile;
@property (nonatomic, copy) NSString *shortExcerpt;
@property (nonatomic, readonly) bool showBundleSoftPaywall;
@property (nonatomic, readonly) bool showMinimalChrome;
@property (nonatomic, readonly) bool showPublisherLogo;
@property (nonatomic) bool showSubscriptionRequiredText;
@property (nonatomic, copy) <FCChannelProviding> *sourceChannel;
@property (nonatomic, readonly, copy) NSString *sourceChannelID;
@property (nonatomic, readonly, copy) NSString *sourceFeedID;
@property (nonatomic, copy) NSString *sourceName;
@property (getter=isSponsored, nonatomic) bool sponsored;
@property (nonatomic, copy) NSString *sponsoredBy;
@property (nonatomic, readonly) <FCHeadlineStocksFields> *stocksFields;
@property (nonatomic, retain) FCTopStoriesStyleConfiguration *storyStyle;
@property (nonatomic) unsigned long long storyType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *surfacedByBinID;
@property (nonatomic, copy) NSString *surfacedByChannelID;
@property (nonatomic, copy) NSString *surfacedBySectionID;
@property (nonatomic, copy) NSSet *surfacedByTagIDs;
@property (nonatomic, copy) NSString *surfacedByTopicID;
@property (nonatomic, retain) FCHeadlineThumbnail *thumbnail;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } thumbnailFocalFrame;
@property (nonatomic, retain) FCHeadlineThumbnail *thumbnailHQ;
@property (nonatomic, retain) FCHeadlineThumbnail *thumbnailLQ;
@property (nonatomic, retain) FCHeadlineThumbnail *thumbnailMedium;
@property (nonatomic, retain) FCHeadlineThumbnail *thumbnailUltraHQ;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailWidget;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailWidgetHQ;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailWidgetLQ;
@property (nonatomic) double tileProminenceScore;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *titleCompact;
@property (nonatomic) unsigned long long topStoryType;
@property (nonatomic, copy) NSArray *topicIDs;
@property (nonatomic, readonly, copy) NSArray *topics;
@property (nonatomic) bool usesImageOnTopLayout;
@property (nonatomic, readonly, copy) NSString *versionIdentifier;
@property (nonatomic, readonly, copy) NSString *videoCallToActionTitle;
@property (nonatomic, readonly, copy) NSURL *videoCallToActionURL;
@property (nonatomic, readonly) double videoDuration;
@property (nonatomic, readonly) NSURL *videoURL;
@property (nonatomic, readonly) bool webEmbedsEnabled;

+ (id)emptyHeadline;
+ (id)emptyHeadlineWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)accessoryText;
- (id)allowedStorefrontIDs;
- (void)applyHeadlineMetadata:(id)arg1 configuration:(id)arg2;
- (unsigned long long)articleContentType;
- (id)articleID;
- (id)articleRecirculationConfigJSON;
- (void)assignStoryType:(unsigned long long)arg1 withConfiguration:(id)arg2;
- (id)associatedAd;
- (long long)backendArticleVersion;
- (id)backingArticleRecordData;
- (id)blockedStorefrontIDs;
- (id)callToActionText;
- (bool)canBePurchased;
- (id)clusterID;
- (id)contentManifestWithContext:(id)arg1;
- (unsigned long long)contentType;
- (id)contentURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coverArt;
- (id)description;
- (id)displayDate;
- (void)enumerateTopicCohortsWithBlock:(id /* block */)arg1;
- (id)excerpt;
- (id)experimentalTitleMetadata;
- (long long)feedElementType;
- (unsigned long long)feedHalfLifeMilliseconds;
- (id)feedID;
- (unsigned long long)feedOrder;
- (id)globalCohorts;
- (double)globalUserFeedback;
- (unsigned long long)halfLife;
- (bool)hasGlobalUserFeedback;
- (bool)hasThumbnail;
- (bool)hasVideo;
- (unsigned long long)hash;
- (id)headlineURL;
- (id)iAdCategories;
- (id)iAdKeywords;
- (id)iAdSectionIDs;
- (id)identifier;
- (id)init;
- (bool)isANF;
- (bool)isBlockedExplicitContent;
- (bool)isBoundToContext;
- (bool)isBundlePaid;
- (bool)isDeleted;
- (bool)isDisplayingAsNativeAd;
- (bool)isDraft;
- (bool)isEqual:(id)arg1;
- (bool)isExplicitContent;
- (bool)isFeatureCandidate;
- (bool)isFromBlockedStorefront;
- (bool)isGap;
- (bool)isHiddenFromAutoFavorites;
- (bool)isHiddenFromFeeds;
- (bool)isIssueOnly;
- (bool)isLocalDraft;
- (bool)isPaid;
- (bool)isPressRelease;
- (bool)isSponsored;
- (bool)isTopStory;
- (id)itemID;
- (id)language;
- (id)lastFetchedDate;
- (id)lastModifiedDate;
- (id)localDraftPath;
- (id)masterIssue;
- (long long)minimumNewsVersion;
- (id)moreFromPublisherArticleIDs;
- (bool)needsRapidUpdates;
- (unsigned long long)order;
- (void)overrideDisplayDate:(id)arg1;
- (void)overrideTitle:(id)arg1;
- (id)primaryAudience;
- (id)publishDate;
- (unsigned long long)publishDateMilliseconds;
- (long long)publisherArticleVersion;
- (id)publisherCohorts;
- (id)publisherID;
- (id)publisherSpecifiedArticleIDs;
- (id)referencedArticleID;
- (id)relatedArticleIDs;
- (unsigned long long)role;
- (id)scoreProfile;
- (void)setAccessoryText:(id)arg1;
- (void)setArticleID:(id)arg1;
- (void)setAssociatedAd:(id)arg1;
- (void)setBundlePaid:(bool)arg1;
- (void)setCallToActionText:(id)arg1;
- (void)setClusterID:(id)arg1;
- (void)setContentType:(unsigned long long)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setDisplayAsNativeAd:(bool)arg1;
- (void)setDisplayDate:(id)arg1;
- (void)setExcerpt:(id)arg1;
- (void)setFeedOrder:(unsigned long long)arg1;
- (void)setGlobalUserFeedback:(double)arg1;
- (void)setHalfLife:(unsigned long long)arg1;
- (void)setHasThumbnail:(bool)arg1;
- (void)setHeadlineURL:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPaid:(bool)arg1;
- (void)setPublishDate:(id)arg1;
- (void)setRole:(unsigned long long)arg1;
- (void)setScoreProfile:(id)arg1;
- (void)setShortExcerpt:(id)arg1;
- (void)setShowSubscriptionRequiredText:(bool)arg1;
- (void)setSourceChannel:(id)arg1;
- (void)setSourceName:(id)arg1;
- (void)setSponsored:(bool)arg1;
- (void)setSponsoredBy:(id)arg1;
- (void)setStoryStyle:(id)arg1;
- (void)setStoryType:(unsigned long long)arg1;
- (void)setSurfacedByBinID:(id)arg1;
- (void)setSurfacedByChannelID:(id)arg1;
- (void)setSurfacedBySectionID:(id)arg1;
- (void)setSurfacedByTagIDs:(id)arg1;
- (void)setSurfacedByTopicID:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setThumbnailFocalFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setThumbnailHQ:(id)arg1;
- (void)setThumbnailLQ:(id)arg1;
- (void)setThumbnailMedium:(id)arg1;
- (void)setThumbnailUltraHQ:(id)arg1;
- (void)setTileProminenceScore:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleCompact:(id)arg1;
- (void)setTopStoryType:(unsigned long long)arg1;
- (void)setTopicIDs:(id)arg1;
- (void)setUsesImageOnTopLayout:(bool)arg1;
- (id)shortExcerpt;
- (bool)showBundleSoftPaywall;
- (bool)showMinimalChrome;
- (bool)showPublisherLogo;
- (bool)showSubscriptionRequiredText;
- (id)sourceChannel;
- (id)sourceChannelID;
- (id)sourceFeedID;
- (id)sourceName;
- (id)sponsoredBy;
- (id)stocksFields;
- (id)storyStyle;
- (unsigned long long)storyType;
- (id)surfacedByBinID;
- (id)surfacedByChannelID;
- (id)surfacedBySectionID;
- (id)surfacedByTagIDs;
- (id)surfacedByTopicID;
- (id)thumbnail;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbnailFocalFrame;
- (id)thumbnailHQ;
- (id)thumbnailLQ;
- (id)thumbnailMedium;
- (id)thumbnailUltraHQ;
- (id)thumbnailWidget;
- (id)thumbnailWidgetHQ;
- (id)thumbnailWidgetLQ;
- (double)tileProminenceScore;
- (id)title;
- (id)titleCompact;
- (unsigned long long)topStoryType;
- (id)topicIDs;
- (id)topics;
- (bool)usesImageOnTopLayout;
- (id)versionIdentifier;
- (id)videoCallToActionTitle;
- (id)videoCallToActionURL;
- (double)videoDuration;
- (id)videoURL;
- (bool)webEmbedsEnabled;

@end
