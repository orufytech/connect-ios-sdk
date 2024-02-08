
Pod::Spec.new do |spec|
  spec.name         = "OrufyConnect"
  spec.version      = "1.0.0"
  spec.summary      = "Ios sdk for connect from OrufyTech"
  spec.description  = "Orufy Connect provides the foundation for creating immersive and engaging communication experiences for users.Orufy Connect SDK offers developers a seamless integration experience"
  spec.homepage     = "https://github.com/orufytech/connect-ios-sdk"
  spec.license      = "MIT"
  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author       = { "Orufy" => "webtonativecare@gmail.com"}
  spec.social_media_url   = "https://www.linkedin.com/company/orufy"
  spec.platform     = :ios, "5.0"
  spec.ios.deployment_target = "11.0"
  spec.source       = { :git => "https://github.com/orufytech/connect-ios-sdk.git", :tag => spec.version.to_s }
  spec.vendored_frameworks = "OrufyConnect.xcframework"
  spec.libraries                = 'c++'
  spec.requires_arc = true
end
