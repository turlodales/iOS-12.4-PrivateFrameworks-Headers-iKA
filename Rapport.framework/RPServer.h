/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPServer : NSObject <NSSecureCoding, RPAuthenticatable, RPCompanionLinkXPCClientInterface> {
    id /* block */  _acceptHandler;
    bool  _activateCalled;
    id /* block */  _authCompletionHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _errorHandler;
    id /* block */  _hidePasswordHandler;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    unsigned int  _pairSetupFlags;
    unsigned int  _pairVerifyFlags;
    NSString * _password;
    int  _passwordType;
    int  _passwordTypeActual;
    id /* block */  _promptForPasswordHandler;
    NSString * _serviceType;
    id /* block */  _showPasswordHandler;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, copy) id /* block */ acceptHandler;
@property (nonatomic, copy) id /* block */ authCompletionHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, copy) id /* block */ hidePasswordHandler;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) unsigned int pairSetupFlags;
@property (nonatomic) unsigned int pairVerifyFlags;
@property (nonatomic, copy) NSString *password;
@property (nonatomic) int passwordType;
@property (nonatomic, readonly) int passwordTypeActual;
@property (nonatomic, copy) id /* block */ promptForPasswordHandler;
@property (nonatomic, retain) NSString *serviceType;
@property (nonatomic, copy) id /* block */ showPasswordHandler;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateWithReactivate:(bool)arg1;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (id /* block */)acceptHandler;
- (void)activate;
- (id /* block */)authCompletionHandler;
- (void)dealloc;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)errorHandler;
- (id /* block */)hidePasswordHandler;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (unsigned int)pairSetupFlags;
- (unsigned int)pairVerifyFlags;
- (id)password;
- (int)passwordType;
- (int)passwordTypeActual;
- (id /* block */)promptForPasswordHandler;
- (id)serviceType;
- (void)setAcceptHandler:(id /* block */)arg1;
- (void)setAuthCompletionHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setHidePasswordHandler:(id /* block */)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setPairSetupFlags:(unsigned int)arg1;
- (void)setPairVerifyFlags:(unsigned int)arg1;
- (void)setPassword:(id)arg1;
- (void)setPasswordType:(int)arg1;
- (void)setPromptForPasswordHandler:(id /* block */)arg1;
- (void)setServiceType:(id)arg1;
- (void)setShowPasswordHandler:(id /* block */)arg1;
- (id /* block */)showPasswordHandler;
- (void)tryPassword:(id)arg1;
- (void)xpcServerAcceptSession:(id)arg1 completion:(id /* block */)arg2;

@end
