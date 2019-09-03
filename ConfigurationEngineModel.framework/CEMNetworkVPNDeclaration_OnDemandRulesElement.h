/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMNetworkVPNDeclaration_OnDemandRulesElement : CEMPayloadBase {
    NSString * _payloadAction;
    CEMNetworkVPNDeclaration_OnDemandRulesElementActionParameters * _payloadActionParameters;
    NSArray * _payloadDNSDomainMatch;
    NSArray * _payloadDNSServerAddressMatch;
    NSString * _payloadInterfaceTypeMatch;
    NSArray * _payloadSSIDMatch;
    NSString * _payloadURLStringProbe;
}

@property (nonatomic, copy) NSString *payloadAction;
@property (nonatomic, copy) CEMNetworkVPNDeclaration_OnDemandRulesElementActionParameters *payloadActionParameters;
@property (nonatomic, copy) NSArray *payloadDNSDomainMatch;
@property (nonatomic, copy) NSArray *payloadDNSServerAddressMatch;
@property (nonatomic, copy) NSString *payloadInterfaceTypeMatch;
@property (nonatomic, copy) NSArray *payloadSSIDMatch;
@property (nonatomic, copy) NSString *payloadURLStringProbe;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithAction:(id)arg1;
+ (id)buildWithDNSDomainMatch:(id)arg1 withDNSServerAddressMatch:(id)arg2 withURLStringProbe:(id)arg3 withAction:(id)arg4 withActionParameters:(id)arg5 withInterfaceTypeMatch:(id)arg6 withSSIDMatch:(id)arg7;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadAction;
- (id)payloadActionParameters;
- (id)payloadDNSDomainMatch;
- (id)payloadDNSServerAddressMatch;
- (id)payloadInterfaceTypeMatch;
- (id)payloadSSIDMatch;
- (id)payloadURLStringProbe;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAction:(id)arg1;
- (void)setPayloadActionParameters:(id)arg1;
- (void)setPayloadDNSDomainMatch:(id)arg1;
- (void)setPayloadDNSServerAddressMatch:(id)arg1;
- (void)setPayloadInterfaceTypeMatch:(id)arg1;
- (void)setPayloadSSIDMatch:(id)arg1;
- (void)setPayloadURLStringProbe:(id)arg1;

@end
