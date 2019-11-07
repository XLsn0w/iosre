//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "NSCopying.h"

@class NSArray, NSData, NSDate, NSDictionary, NSError, NSInputStream, NSMutableArray, NSMutableData, NSMutableDictionary, NSNumber, NSOutputStream, NSRecursiveLock, NSString, NSThread, NSTimer, NSURL, QBASIDataDecompressor;

@interface QBASIHTTPRequest : NSOperation <NSCopying>
{
    NSURL *url;
    NSURL *originalURL;
    NSURL *redirectURL;
    id <QBASIHTTPRequestDelegate> delegate;
    id <QBASIHTTPRequestDelegate><QBASIProgressDelegate> queue;
    NSString *requestMethod;
    NSMutableData *postBody;
    NSData *compressedPostBody;
    _Bool shouldStreamPostDataFromDisk;
    NSString *postBodyFilePath;
    NSString *compressedPostBodyFilePath;
    _Bool didCreateTemporaryPostDataFile;
    NSOutputStream *postBodyWriteStream;
    NSInputStream *postBodyReadStream;
    NSMutableDictionary *requestHeaders;
    _Bool haveBuiltRequestHeaders;
    NSDictionary *responseHeaders;
    NSMutableArray *requestCookies;
    NSArray *responseCookies;
    _Bool useCookiePersistence;
    _Bool useKeychainPersistence;
    _Bool useSessionPersistence;
    _Bool allowCompressedResponse;
    _Bool shouldCompressRequestBody;
    NSString *downloadDestinationPath;
    NSString *temporaryFileDownloadPath;
    NSString *temporaryUncompressedDataDownloadPath;
    NSOutputStream *fileDownloadOutputStream;
    NSOutputStream *inflatedFileDownloadOutputStream;
    _Bool complete;
    _Bool finished;
    _Bool cancelled;
    NSError *error;
    NSString *username;
    NSString *password;
    NSString *userAgentString;
    NSString *domain;
    NSString *proxyUsername;
    NSString *proxyPassword;
    NSString *proxyDomain;
    id <QBASIProgressDelegate> uploadProgressDelegate;
    id <QBASIProgressDelegate> downloadProgressDelegate;
    _Bool haveExaminedHeaders;
    NSMutableData *rawResponseData;
    struct __CFHTTPMessage *request;
    NSInputStream *readStream;
    struct _CFHTTPAuthentication *requestAuthentication;
    NSDictionary *requestCredentials;
    int authenticationRetryCount;
    NSString *authenticationScheme;
    NSString *authenticationRealm;
    _Bool shouldPresentAuthenticationDialog;
    _Bool shouldPresentProxyAuthenticationDialog;
    struct _CFHTTPAuthentication *proxyAuthentication;
    NSDictionary *proxyCredentials;
    int proxyAuthenticationRetryCount;
    NSString *proxyAuthenticationScheme;
    NSString *proxyAuthenticationRealm;
    int responseStatusCode;
    NSString *responseStatusMessage;
    unsigned long long contentLength;
    unsigned long long partialDownloadSize;
    unsigned long long postLength;
    unsigned long long totalBytesRead;
    unsigned long long totalBytesSent;
    unsigned long long lastBytesRead;
    unsigned long long lastBytesSent;
    NSRecursiveLock *cancelledLock;
    SEL didStartSelector;
    SEL didReceiveResponseHeadersSelector;
    SEL willRedirectSelector;
    SEL didFinishSelector;
    SEL didFailSelector;
    SEL didReceiveDataSelector;
    NSDate *lastActivityTime;
    double timeOutSeconds;
    _Bool shouldResetUploadProgress;
    _Bool shouldResetDownloadProgress;
    QBASIHTTPRequest *mainRequest;
    _Bool showAccurateProgress;
    _Bool updatedProgress;
    _Bool haveBuiltPostBody;
    unsigned long long uploadBufferSize;
    unsigned long long defaultResponseEncoding;
    unsigned long long responseEncoding;
    _Bool allowResumeForFileDownloads;
    NSDictionary *userInfo;
    long long tag;
    _Bool useHTTPVersionOne;
    _Bool shouldRedirect;
    _Bool needsRedirect;
    int redirectCount;
    _Bool validatesSecureCertificate;
    struct __SecIdentity *clientCertificateIdentity;
    NSArray *clientCertificates;
    NSString *proxyHost;
    int proxyPort;
    NSString *proxyType;
    NSURL *PACurl;
    int authenticationNeeded;
    _Bool shouldPresentCredentialsBeforeChallenge;
    _Bool inProgress;
    _Bool readStreamIsScheduled;
    int numberOfTimesToRetryOnTimeout;
    int retryCount;
    _Bool willRetryRequest;
    _Bool shouldAttemptPersistentConnection;
    double persistentConnectionTimeoutSeconds;
    _Bool connectionCanBeReused;
    NSMutableDictionary *connectionInfo;
    _Bool shouldUseRFC2616RedirectBehaviour;
    _Bool downloadComplete;
    NSNumber *requestID;
    NSString *runLoopMode;
    NSTimer *statusTimer;
    id <QBASICacheDelegate> downloadCache;
    int cachePolicy;
    int cacheStoragePolicy;
    _Bool didUseCachedResponse;
    double secondsToCache;
    _Bool shouldContinueWhenAppEntersBackground;
    unsigned long long backgroundTask;
    QBASIDataDecompressor *dataDecompressor;
    _Bool shouldWaitToInflateCompressedResponses;
    _Bool isPACFileRequest;
    QBASIHTTPRequest *PACFileRequest;
    NSInputStream *PACFileReadStream;
    NSMutableData *PACFileData;
    _Bool isSynchronous;
    CDUnknownBlockType startedBlock;
    CDUnknownBlockType headersReceivedBlock;
    CDUnknownBlockType completionBlock;
    CDUnknownBlockType failureBlock;
    CDUnknownBlockType bytesReceivedBlock;
    CDUnknownBlockType bytesSentBlock;
    CDUnknownBlockType downloadSizeIncrementedBlock;
    CDUnknownBlockType uploadSizeIncrementedBlock;
    CDUnknownBlockType dataReceivedBlock;
    CDUnknownBlockType authenticationNeededBlock;
    CDUnknownBlockType proxyAuthenticationNeededBlock;
    CDUnknownBlockType requestRedirectedBlock;
    _Bool isQBNetwork;
    _Bool noRedict;
    NSThread *qbThread;
    NSString *sslHost;
}

+ (void)addSessionCookie:(id)arg1;
+ (unsigned long long)averageBandwidthUsedPerSecond;
+ (id)base64forData:(id)arg1;
+ (void)clearSession;
+ (id)dateFromRFC1123String:(id)arg1;
+ (id)defaultCache;
+ (double)defaultTimeOutSeconds;
+ (id)defaultUserAgentString;
+ (void)expirePersistentConnections;
+ (id)expiryDateForRequest:(id)arg1 maxAge:(double)arg2;
+ (_Bool)hasParsePac;
+ (void)hideNetworkActivityIndicator;
+ (void)hideNetworkActivityIndicatorAfterDelay;
+ (void)hideNetworkActivityIndicatorIfNeeeded;
+ (void)incrementBandwidthUsedInLastSecond:(unsigned long long)arg1;
+ (void)initialize;
+ (_Bool)isBandwidthThrottled;
+ (_Bool)isMultitaskingSupported;
+ (_Bool)isNetworkInUse;
+ (_Bool)isNetworkReachableViaWWAN;
+ (unsigned long long)maxBandwidthPerSecond;
+ (unsigned long long)maxUploadReadLength;
+ (void)measureBandwidthUsage;
+ (id)mimeTypeForFileAtPath:(id)arg1;
+ (void)parseMimeType:(id *)arg1 andResponseEncoding:(unsigned long long *)arg2 fromContentType:(id)arg3;
+ (void)performInvocation:(id)arg1 onTarget:(id *)arg2 releasingObject:(id)arg3;
+ (void)performSelector:(SEL)arg1 onTarget:(id *)arg2 withObject:(id)arg3 amount:(void *)arg4 callerToRetain:(id)arg5;
+ (void)reachabilityChanged:(id)arg1;
+ (void)recordBandwidthUsage;
+ (void)registerForNetworkReachabilityNotifications;
+ (void)releaseBlocks:(id)arg1;
+ (void)removeAuthenticationCredentialsFromSessionStore:(id)arg1;
+ (void)removeCredentialsForHost:(id)arg1 port:(int)arg2 protocol:(id)arg3 realm:(id)arg4;
+ (void)removeCredentialsForProxy:(id)arg1 port:(int)arg2 realm:(id)arg3;
+ (_Bool)removeFileAtPath:(id)arg1 error:(id *)arg2;
+ (void)removeProxyAuthenticationCredentialsFromSessionStore:(id)arg1;
+ (id)requestWithURL:(id)arg1;
+ (id)requestWithURL:(id)arg1 usingCache:(id)arg2;
+ (id)requestWithURL:(id)arg1 usingCache:(id)arg2 andCachePolicy:(int)arg3;
+ (void)runRequests;
+ (void)saveCredentials:(id)arg1 forHost:(id)arg2 port:(int)arg3 protocol:(id)arg4 realm:(id)arg5;
+ (void)saveCredentials:(id)arg1 forProxy:(id)arg2 port:(int)arg3 realm:(id)arg4;
+ (id)savedCredentialsForHost:(id)arg1 port:(int)arg2 protocol:(id)arg3 realm:(id)arg4;
+ (id)savedCredentialsForProxy:(id)arg1 port:(int)arg2 protocol:(id)arg3 realm:(id)arg4;
+ (id)sessionCookies;
+ (id)sessionCredentialsStore;
+ (id)sessionProxyCredentialsStore;
+ (void)setDefaultCache:(id)arg1;
+ (void)setDefaultTimeOutSeconds:(double)arg1;
+ (void)setDefaultUserAgentString:(id)arg1;
+ (void)setMaxBandwidthPerSecond:(unsigned long long)arg1;
+ (void)setSessionCookies:(id)arg1;
+ (void)setShouldThrottleBandwidthForWWAN:(_Bool)arg1;
+ (void)setShouldUpdateNetworkActivityIndicator:(_Bool)arg1;
+ (id)sharedQueue;
+ (void)showNetworkActivityIndicator;
+ (void)storeAuthenticationCredentialsInSessionStore:(id)arg1;
+ (void)storeProxyAuthenticationCredentialsInSessionStore:(id)arg1;
+ (id)threadForRequest:(id)arg1;
+ (void)throttleBandwidthForWWANUsingLimit:(unsigned long long)arg1;
+ (void)unsubscribeFromNetworkReachabilityNotifications;
+ (void)updateProgressIndicator:(id *)arg1 withProgress:(unsigned long long)arg2 ofTotal:(unsigned long long)arg3;
- (id)HEADRequest;
@property(retain, nonatomic) NSMutableData *PACFileData; // @synthesize PACFileData;
@property(retain, nonatomic) NSInputStream *PACFileReadStream; // @synthesize PACFileReadStream;
@property(retain, nonatomic) QBASIHTTPRequest *PACFileRequest; // @synthesize PACFileRequest;
@property(retain) NSURL *PACurl; // @synthesize PACurl;
- (void)addBasicAuthenticationHeaderWithUsername:(id)arg1 andPassword:(id)arg2;
- (void)addRequestHeader:(id)arg1 value:(id)arg2;
@property _Bool allowCompressedResponse; // @synthesize allowCompressedResponse;
@property _Bool allowResumeForFileDownloads; // @synthesize allowResumeForFileDownloads;
- (void)appendPostData:(id)arg1;
- (void)appendPostDataFromFile:(id)arg1;
- (void)appendRequestHeader:(id)arg1 value:(id)arg2;
- (void)applyAuthorizationHeader;
- (void)applyCookieHeader;
- (_Bool)applyCredentials:(id)arg1;
- (_Bool)applyProxyCredentials:(id)arg1;
- (void)askDelegateForCredentials;
- (void)askDelegateForProxyCredentials;
- (void)attemptToApplyCredentialsAndResume;
- (void)attemptToApplyProxyCredentialsAndResume;
@property int authenticationNeeded; // @synthesize authenticationNeeded;
@property(retain) NSString *authenticationRealm; // @synthesize authenticationRealm;
@property int authenticationRetryCount; // @synthesize authenticationRetryCount;
@property(retain) NSString *authenticationScheme; // @synthesize authenticationScheme;
- (void)buildPostBody;
- (void)buildRequestHeaders;
@property int cachePolicy; // @synthesize cachePolicy;
@property int cacheStoragePolicy; // @synthesize cacheStoragePolicy;
- (void)callBlock:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)cancelAuthentication;
- (void)cancelLoad;
- (void)cancelOnRequestThread;
@property(retain) NSRecursiveLock *cancelledLock; // @synthesize cancelledLock;
- (void)checkRequestStatus;
- (void)clearDelegatesAndCancel;
@property(retain) NSArray *clientCertificates; // @synthesize clientCertificates;
@property _Bool complete; // @synthesize complete;
@property(retain, nonatomic) NSData *compressedPostBody; // @synthesize compressedPostBody;
@property(retain, nonatomic) NSString *compressedPostBodyFilePath; // @synthesize compressedPostBodyFilePath;
- (_Bool)configureProxies;
@property _Bool connectionCanBeReused; // @synthesize connectionCanBeReused;
- (id)connectionID;
@property(retain, nonatomic) NSMutableDictionary *connectionInfo; // @synthesize connectionInfo;
@property unsigned long long contentLength; // @synthesize contentLength;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain) QBASIDataDecompressor *dataDecompressor; // @synthesize dataDecompressor;
- (void)dealloc;
@property unsigned long long defaultResponseEncoding; // @synthesize defaultResponseEncoding;
@property(nonatomic) id delegate; // @synthesize delegate;
- (void)destroyReadStream;
@property _Bool didCreateTemporaryPostDataFile; // @synthesize didCreateTemporaryPostDataFile;
@property SEL didFailSelector; // @synthesize didFailSelector;
@property SEL didFinishSelector; // @synthesize didFinishSelector;
@property SEL didReceiveDataSelector; // @synthesize didReceiveDataSelector;
@property SEL didReceiveResponseHeadersSelector; // @synthesize didReceiveResponseHeadersSelector;
@property SEL didStartSelector; // @synthesize didStartSelector;
@property _Bool didUseCachedResponse; // @synthesize didUseCachedResponse;
@property(retain) NSString *domain; // @synthesize domain;
@property id <QBASICacheDelegate> downloadCache; // @synthesize downloadCache;
@property(nonatomic) _Bool downloadComplete; // @synthesize downloadComplete;
@property(retain) NSString *downloadDestinationPath; // @synthesize downloadDestinationPath;
@property(nonatomic) id downloadProgressDelegate; // @synthesize downloadProgressDelegate;
@property(retain) NSError *error; // @synthesize error;
- (void)failAuthentication;
- (void)failWithError:(id)arg1;
- (void)fetchPACFile;
@property(retain, nonatomic) NSOutputStream *fileDownloadOutputStream; // @synthesize fileDownloadOutputStream;
- (id)findCredentials;
- (id)findProxyCredentials;
- (id)findSessionAuthenticationCredentials;
- (id)findSessionProxyAuthenticationCredentials;
- (void)finishedDownloadingPACFile:(id)arg1;
- (void)handleBytesAvailable;
- (void)handleNetworkEvent:(unsigned long long)arg1;
- (void)handleStreamComplete;
- (void)handleStreamError;
@property(nonatomic) _Bool haveBuiltPostBody; // @synthesize haveBuiltPostBody;
@property _Bool haveBuiltRequestHeaders; // @synthesize haveBuiltRequestHeaders;
@property _Bool inProgress; // @synthesize inProgress;
- (void)incrementDownloadSizeBy:(long long)arg1;
- (void)incrementUploadSizeBy:(long long)arg1;
@property(retain, nonatomic) NSOutputStream *inflatedFileDownloadOutputStream; // @synthesize inflatedFileDownloadOutputStream;
- (id)initWithURL:(id)arg1;
- (_Bool)isCancelled;
- (_Bool)isConcurrent;
- (_Bool)isExecuting;
- (_Bool)isFinished;
@property(nonatomic) _Bool isPACFileRequest; // @synthesize isPACFileRequest;
@property _Bool isQBNetwork; // @synthesize isQBNetwork;
- (_Bool)isResponseCompressed;
@property(nonatomic, setter=setSynchronous:) _Bool isSynchronous; // @synthesize isSynchronous;
@property(retain, nonatomic) NSDate *lastActivityTime; // @synthesize lastActivityTime;
@property(nonatomic) unsigned long long lastBytesRead; // @synthesize lastBytesRead;
@property(nonatomic) unsigned long long lastBytesSent; // @synthesize lastBytesSent;
- (void)main;
@property QBASIHTTPRequest *mainRequest; // @synthesize mainRequest;
- (void)markAsFinished;
@property(nonatomic) _Bool needsRedirect; // @synthesize needsRedirect;
@property _Bool noRedict; // @synthesize noRedict;
@property int numberOfTimesToRetryOnTimeout; // @synthesize numberOfTimesToRetryOnTimeout;
@property(retain) NSURL *originalURL; // @synthesize originalURL;
- (void)parseStringEncodingFromHeaders;
@property unsigned long long partialDownloadSize; // @synthesize partialDownloadSize;
- (void)passOnReceivedData:(id)arg1;
@property(retain) NSString *password; // @synthesize password;
- (void)performBlockOnMainThread:(CDUnknownBlockType)arg1;
- (void)performRedirect;
- (void)performThrottling;
@property double persistentConnectionTimeoutSeconds; // @synthesize persistentConnectionTimeoutSeconds;
@property(retain) NSMutableData *postBody; // @synthesize postBody;
@property(retain) NSString *postBodyFilePath; // @synthesize postBodyFilePath;
@property(retain, nonatomic) NSInputStream *postBodyReadStream; // @synthesize postBodyReadStream;
@property(retain, nonatomic) NSOutputStream *postBodyWriteStream; // @synthesize postBodyWriteStream;
@property unsigned long long postLength; // @synthesize postLength;
@property(retain) NSString *proxyAuthenticationRealm; // @synthesize proxyAuthenticationRealm;
@property int proxyAuthenticationRetryCount; // @synthesize proxyAuthenticationRetryCount;
@property(retain) NSString *proxyAuthenticationScheme; // @synthesize proxyAuthenticationScheme;
@property(retain) NSDictionary *proxyCredentials; // @synthesize proxyCredentials;
@property(retain) NSString *proxyDomain; // @synthesize proxyDomain;
@property(retain) NSString *proxyHost; // @synthesize proxyHost;
@property(retain) NSString *proxyPassword; // @synthesize proxyPassword;
@property int proxyPort; // @synthesize proxyPort;
@property(retain) NSString *proxyType; // @synthesize proxyType;
@property(retain) NSString *proxyUsername; // @synthesize proxyUsername;
- (void)qbCancel;
- (_Bool)qbNeedsRedirect;
- (void)qbRedirectToURL:(id)arg1;
- (void)qbSetPostBodyReadStream:(id)arg1;
- (void)qbStartAsynchronous;
- (void)qbStartSynchronous;
@property(retain) NSThread *qbThread; // @synthesize qbThread;
@property(retain, nonatomic) id queue; // @synthesize queue;
@property(retain) NSMutableData *rawResponseData; // @synthesize rawResponseData;
- (void)readResponseHeaders;
@property(retain, nonatomic) NSInputStream *readStream; // @synthesize readStream;
@property(nonatomic) _Bool readStreamIsScheduled; // @synthesize readStreamIsScheduled;
@property(nonatomic) int redirectCount; // @synthesize redirectCount;
- (void)redirectToURL:(id)arg1;
@property(retain, nonatomic) NSURL *redirectURL; // @synthesize redirectURL;
- (void)releaseBlocksOnMainThread;
- (_Bool)removeTemporaryCompressedUploadFile;
- (_Bool)removeTemporaryDownloadFile;
- (_Bool)removeTemporaryUncompressedDownloadFile;
- (_Bool)removeTemporaryUploadFile;
- (void)removeUploadProgressSoFar;
- (void)reportFailure;
- (void)reportFinished;
@property(retain) NSMutableArray *requestCookies; // @synthesize requestCookies;
@property(retain) NSDictionary *requestCredentials; // @synthesize requestCredentials;
- (void)requestFinished;
@property(retain) NSMutableDictionary *requestHeaders; // @synthesize requestHeaders;
@property(retain) NSNumber *requestID; // @synthesize requestID;
@property(retain, nonatomic) NSString *requestMethod; // @synthesize requestMethod;
- (void)requestReceivedResponseHeaders:(id)arg1;
- (void)requestRedirected;
- (void)requestStarted;
- (void)requestWillRedirectToURL:(id)arg1;
@property(retain) NSArray *responseCookies; // @synthesize responseCookies;
- (id)responseData;
@property unsigned long long responseEncoding; // @synthesize responseEncoding;
@property(retain) NSDictionary *responseHeaders; // @synthesize responseHeaders;
@property int responseStatusCode; // @synthesize responseStatusCode;
@property(retain) NSString *responseStatusMessage; // @synthesize responseStatusMessage;
- (id)responseString;
@property int retryCount; // @synthesize retryCount;
- (_Bool)retryUsingNewConnection;
- (void)retryUsingSuppliedCredentials;
@property(nonatomic) NSString *runLoopMode; // @synthesize runLoopMode;
- (void)runPACScript:(id)arg1;
- (void)saveCredentialsToKeychain:(id)arg1;
- (void)saveProxyCredentialsToKeychain:(id)arg1;
- (void)scheduleReadStream;
@property double secondsToCache; // @synthesize secondsToCache;
- (void)setAuthenticationNeededBlock:(CDUnknownBlockType)arg1;
- (void)setBytesReceivedBlock:(CDUnknownBlockType)arg1;
- (void)setBytesSentBlock:(CDUnknownBlockType)arg1;
- (void)setClientCertificateIdentity:(struct __SecIdentity *)arg1;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setDataReceivedBlock:(CDUnknownBlockType)arg1;
- (void)setDownloadSizeIncrementedBlock:(CDUnknownBlockType)arg1;
- (void)setFailedBlock:(CDUnknownBlockType)arg1;
- (void)setHeadersReceivedBlock:(CDUnknownBlockType)arg1;
- (void)setProxyAuthenticationNeededBlock:(CDUnknownBlockType)arg1;
- (void)setRequestRedirectedBlock:(CDUnknownBlockType)arg1;
@property _Bool shouldAttemptPersistentConnection; // @synthesize shouldAttemptPersistentConnection;
@property _Bool shouldCompressRequestBody; // @synthesize shouldCompressRequestBody;
@property _Bool shouldContinueWhenAppEntersBackground; // @synthesize shouldContinueWhenAppEntersBackground;
@property _Bool shouldPresentAuthenticationDialog; // @synthesize shouldPresentAuthenticationDialog;
@property _Bool shouldPresentCredentialsBeforeChallenge; // @synthesize shouldPresentCredentialsBeforeChallenge;
@property _Bool shouldPresentProxyAuthenticationDialog; // @synthesize shouldPresentProxyAuthenticationDialog;
@property _Bool shouldRedirect; // @synthesize shouldRedirect;
@property _Bool shouldResetDownloadProgress; // @synthesize shouldResetDownloadProgress;
@property _Bool shouldResetUploadProgress; // @synthesize shouldResetUploadProgress;
@property _Bool shouldStreamPostDataFromDisk; // @synthesize shouldStreamPostDataFromDisk;
@property _Bool shouldUseRFC2616RedirectBehaviour; // @synthesize shouldUseRFC2616RedirectBehaviour;
@property _Bool shouldWaitToInflateCompressedResponses; // @synthesize shouldWaitToInflateCompressedResponses;
@property _Bool showAccurateProgress; // @synthesize showAccurateProgress;
@property(retain) NSString *sslHost; // @synthesize sslHost;
- (void)setStartedBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSTimer *statusTimer; // @synthesize statusTimer;
@property long long tag; // @synthesize tag;
@property(retain) NSString *temporaryFileDownloadPath; // @synthesize temporaryFileDownloadPath;
@property(retain) NSString *temporaryUncompressedDataDownloadPath; // @synthesize temporaryUncompressedDataDownloadPath;
@property double timeOutSeconds; // @synthesize timeOutSeconds;
@property unsigned long long totalBytesRead; // @synthesize totalBytesRead;
@property unsigned long long totalBytesSent; // @synthesize totalBytesSent;
@property(retain, nonatomic, setter=setURL:) NSURL *url; // @synthesize url;
@property(nonatomic) _Bool updatedProgress; // @synthesize updatedProgress;
@property(nonatomic) unsigned long long uploadBufferSize; // @synthesize uploadBufferSize;
@property(nonatomic) id uploadProgressDelegate; // @synthesize uploadProgressDelegate;
- (void)setUploadSizeIncrementedBlock:(CDUnknownBlockType)arg1;
@property _Bool useCookiePersistence; // @synthesize useCookiePersistence;
@property _Bool useHTTPVersionOne; // @synthesize useHTTPVersionOne;
@property _Bool useKeychainPersistence; // @synthesize useKeychainPersistence;
@property _Bool useSessionPersistence; // @synthesize useSessionPersistence;
@property(retain) NSString *userAgentString; // @synthesize userAgentString;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo;
@property(retain) NSString *username; // @synthesize username;
@property _Bool validatesSecureCertificate; // @synthesize validatesSecureCertificate;
@property SEL willRedirectSelector; // @synthesize willRedirectSelector;
@property _Bool willRetryRequest; // @synthesize willRetryRequest;
- (void)setupPostBody;
- (_Bool)shouldTimeOut;
- (_Bool)showAuthenticationDialog;
- (_Bool)showProxyAuthenticationDialog;
- (void)start;
- (void)startAsynchronous;
- (void)startRequest;
- (void)startSynchronous;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)timeOutPACRead;
- (void)unscheduleReadStream;
- (void)updateDownloadProgress;
- (void)updatePartialDownloadSize;
- (void)updateProgressIndicators;
- (void)updateStatus:(id)arg1;
- (void)updateUploadProgress;
- (void)useDataFromCache;
- (_Bool)willAskDelegateForCredentials;
- (_Bool)willAskDelegateForProxyCredentials;
- (_Bool)willAskDelegateToConfirmRedirect;
- (_Bool)willRedirect;

@end

