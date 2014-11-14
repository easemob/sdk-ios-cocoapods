Pod::Spec.new do |spec|
  spec.name         = 'EaseMobSDK'
  spec.version      = '2.1.1'
  spec.license      = 'MIT'
  spec.summary      = 'An Objective-C client for IM service'
  spec.homepage     = 'https://github.com/winterSleep/EasemobSDK/'
  spec.author       = {'EaseMob Inc.' => 'lizhiping@easemob.com'}
  spec.source       =  {:git => 'https://github.com/easemob/sdk-ios-cocoapods.git', :tag => '2.1.1'}
  spec.source_files = "EaseMobSDK/**/*.{h}"
  spec.platform     = :ios, '6.0'
  spec.requires_arc = true
  spec.frameworks = 'Foundation', 'UIKit', 'MapKit', 'ImageIO', 'CoreLocation', 'Security', 'MobileCoreServices',  'SystemConfiguration', 'AddressBook', 'CFNetwork', 'CoreGraphics'
  spec.libraries    = 'iconv', 'xml2', 'z', 'resolv', 'stdc++'
  spec.resource     = 'EaseMobSDK/resources/EaseMob.bundle'
  spec.vendored_libraries = 'EaseMobSDK/lib/libEaseMobClientSDKLite.a'
  spec.xcconfig     = {'OTHER_LDFLAGS' => '-ObjC'}
end
