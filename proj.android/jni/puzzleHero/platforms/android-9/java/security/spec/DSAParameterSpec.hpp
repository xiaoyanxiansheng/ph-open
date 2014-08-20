/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.spec.DSAParameterSpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_DSAPARAMETERSPEC_HPP_DECL
#define J2CPP_JAVA_SECURITY_SPEC_DSAPARAMETERSPEC_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { namespace interfaces { class DSAParams; } } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } } }
namespace j2cpp { namespace java { namespace math { class BigInteger; } } }


#include <java/lang/Object.hpp>
#include <java/math/BigInteger.hpp>
#include <java/security/interfaces/DSAParams.hpp>
#include <java/security/spec/AlgorithmParameterSpec.hpp>


namespace j2cpp {

namespace java { namespace security { namespace spec {

	class DSAParameterSpec;
	class DSAParameterSpec
		: public object<DSAParameterSpec>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit DSAParameterSpec(jobject jobj)
		: object<DSAParameterSpec>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::security::interfaces::DSAParams>() const;
		operator local_ref<java::security::spec::AlgorithmParameterSpec>() const;


		DSAParameterSpec(local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&);
		local_ref< java::math::BigInteger > getG();
		local_ref< java::math::BigInteger > getP();
		local_ref< java::math::BigInteger > getQ();
	}; //class DSAParameterSpec

} //namespace spec
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_DSAPARAMETERSPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_DSAPARAMETERSPEC_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SPEC_DSAPARAMETERSPEC_HPP_IMPL

namespace j2cpp {



java::security::spec::DSAParameterSpec::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::security::spec::DSAParameterSpec::operator local_ref<java::security::interfaces::DSAParams>() const
{
	return local_ref<java::security::interfaces::DSAParams>(get_jobject());
}

java::security::spec::DSAParameterSpec::operator local_ref<java::security::spec::AlgorithmParameterSpec>() const
{
	return local_ref<java::security::spec::AlgorithmParameterSpec>(get_jobject());
}


java::security::spec::DSAParameterSpec::DSAParameterSpec(local_ref< java::math::BigInteger > const &a0, local_ref< java::math::BigInteger > const &a1, local_ref< java::math::BigInteger > const &a2)
: object<java::security::spec::DSAParameterSpec>(
	call_new_object<
		java::security::spec::DSAParameterSpec::J2CPP_CLASS_NAME,
		java::security::spec::DSAParameterSpec::J2CPP_METHOD_NAME(0),
		java::security::spec::DSAParameterSpec::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2)
)
{
}


local_ref< java::math::BigInteger > java::security::spec::DSAParameterSpec::getG()
{
	return call_method<
		java::security::spec::DSAParameterSpec::J2CPP_CLASS_NAME,
		java::security::spec::DSAParameterSpec::J2CPP_METHOD_NAME(1),
		java::security::spec::DSAParameterSpec::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::math::BigInteger >
	>(get_jobject());
}

local_ref< java::math::BigInteger > java::security::spec::DSAParameterSpec::getP()
{
	return call_method<
		java::security::spec::DSAParameterSpec::J2CPP_CLASS_NAME,
		java::security::spec::DSAParameterSpec::J2CPP_METHOD_NAME(2),
		java::security::spec::DSAParameterSpec::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::math::BigInteger >
	>(get_jobject());
}

local_ref< java::math::BigInteger > java::security::spec::DSAParameterSpec::getQ()
{
	return call_method<
		java::security::spec::DSAParameterSpec::J2CPP_CLASS_NAME,
		java::security::spec::DSAParameterSpec::J2CPP_METHOD_NAME(3),
		java::security::spec::DSAParameterSpec::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::math::BigInteger >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::spec::DSAParameterSpec,"java/security/spec/DSAParameterSpec")
J2CPP_DEFINE_METHOD(java::security::spec::DSAParameterSpec,0,"<init>","(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V")
J2CPP_DEFINE_METHOD(java::security::spec::DSAParameterSpec,1,"getG","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::spec::DSAParameterSpec,2,"getP","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::spec::DSAParameterSpec,3,"getQ","()Ljava/math/BigInteger;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_DSAPARAMETERSPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION