/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EARResultCombiner : NSObject {
    struct unique_ptr<quasar::ResultCombiner, std::__1::default_delete<quasar::ResultCombiner> > { 
        struct __compressed_pair<quasar::ResultCombiner *, std::__1::default_delete<quasar::ResultCombiner> > { 
            struct ResultCombiner {} *__value_; 
        } __ptr_; 
    }  _combiner;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)combinedResultWithSystemResults:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

@end
