/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAServiceUnavailableClientHandler : NSObject <PHAServiceOperationHandling, PLPhotoAnalysisServiceProtocol>

- (void)cancelOperationsWithIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)dumpAnalysisStatusWithContext:(id)arg1 reply:(id /* block */)arg2;
- (id)error;
- (void)faceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)faceClusteringInformation:(unsigned long long)arg1 withContext:(id)arg2 reply:(id /* block */)arg3;
- (void)faceProcessingStatusForUserInterfaceWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)generateMemoriesRelatedDiagnosticsLogsWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)generateMemoriesWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)generateSuggestionsWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)handleOperation:(id)arg1;
- (void)invalidateGraphWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)loadGraphWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)localizedLabelForSceneIdentifier:(unsigned int)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)performSceneClassificationOnAssetWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)personPromoterStatusWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)pingFaceWorkerWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)pingGraphWorkerWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)pingSceneWorkerWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)processPersonsWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)rebuildGraphWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)rebuildPersonsWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)reclusterFacesWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestAllSocialGroupsForPersonIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestAssetCollectionsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestAssetCollectionsRelatedToPersonIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 context:(id)arg4 reply:(id /* block */)arg5;
- (void)requestAssetsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg1 referenceAssetLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 options:(id)arg4 context:(id)arg5 reply:(id /* block */)arg6;
- (void)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4 context:(id)arg5 reply:(id /* block */)arg6;
- (void)requestCurationDebugInformationForAsset:(id)arg1 precision:(unsigned long long)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestDefaultsObjectForKey:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestExportGraphServiceForPurpose:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestGraphRebuildFractionCompletedWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestGraphSearchMetadataWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestGraphServicePerformsQueryWithContext:(id)arg1 query:(id)arg2 reply:(id /* block */)arg3;
- (void)requestGraphServiceStatisticsWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestGraphServiceStatusWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestHighlightDebugInformationForHighlightWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestHighlightEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestHighlightEstimatesWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestInferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestInferredContactIdentifierForPersonLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestInvalidateServicePersistentCachesWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestInvalidateServiceTransientCachesWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestLocalizedSceneAncestryInformationWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestMemoryAssetCollectionDebugInformationForIdentifier:(id)arg1 precision:(unsigned long long)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestMemoryTreeDebugInformationWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestMetadataSnapshotFolderCreationWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestPerformUpdatesForMomentLocalIdentifiersToInsert:(id)arg1 momentLocalIdentifiersToDelete:(id)arg2 momentLocalIdentifiersToReload:(id)arg3 context:(id)arg4 reply:(id /* block */)arg5;
- (void)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 context:(id)arg6 reply:(id /* block */)arg7;
- (void)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 context:(id)arg6 reply:(id /* block */)arg7;
- (void)requestRelatedMomentsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 context:(id)arg4 reply:(id /* block */)arg5;
- (void)requestSearchInformationForTripUUIDs:(id)arg1 withOptions:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestSetDefaultsObject:(id)arg1 forKey:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestSharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestSharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestSharingSuggestionsFromMessageStrings:(id)arg1 participantPHIdentifiers:(id)arg2 options:(id)arg3 context:(id)arg4 reply:(id /* block */)arg5;
- (void)requestSharingSuggestionsFromMomentLocalIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 context:(id)arg5 reply:(id /* block */)arg6;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 additionalSnapshotSummaryInfo:(id)arg5 context:(id)arg6 reply:(id /* block */)arg7;
- (void)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestSocialGroupsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestSortedArrayOfPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestSuggestedContactIdentifiersForPersonLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestSuggestedContributionsForAssetsMetadata:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestSuggestedMePersonIdentifierWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestSuggestedRecipientsForMomentIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestSynonymsDictionariesWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestTitleForAssetCollectionWithLocalIdentifier:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestTitleForCollectionMomentListWithLocalIdentifier:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestTitleForMemoryWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestTitleForPersonIdentifiers:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestTransientMemoriesWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestTransientMemoryPropertiesWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestWriteAdditionalDataToSnapshotResults:(id)arg1 forFilenameKey:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestZeroKeywordsWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)resetFaceClassificationModelWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)resetFaceClusteringStateWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)resetPeopleWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)sceneNodesForSceneIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)scheduleAssetForOnDemandAnalysisWithUUID:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3 context:(id)arg4 reply:(id /* block */)arg5;
- (void)searchResultNodesForSceneClassifications:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)searchResultNodesForSceneIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)simulateMemoriesNotificationWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)suggestPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 context:(id)arg4 reply:(id /* block */)arg5;
- (void)suggestVerifiedPersonLocalIdentifierForFaceWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)suggestVerifiedPersonLocalIdentifierForPersonWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)unloadGraphWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(bool)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)validateClusterCacheWithContext:(id)arg1 reply:(id /* block */)arg2;

@end
